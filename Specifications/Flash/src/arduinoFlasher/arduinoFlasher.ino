#include <SPI.h>
#include <SD.h>
#include <DIO2.h>

#define SST_39SF010
//#define SST_39SF020
//#define SST_39SF040


#define SECTOR_SIZE   4096    /* Must be 4096 bytes for 39SF040 */
#define SST_ID        0xBF    /* SST Manufacturer's ID code   */

#ifdef SST_39SF010
  uint8_t chip_id = 0xB5;
  uint8_t addr_size = 17;
#endif

#ifdef SST_39SF020
  uint8_t chip_id = 0xB6;
  uint8_t addr_size = 18;
#endif

#ifdef SST_39SF040
  uint8_t chip_id = 0xB7;
  uint8_t addr_size = 19;
#endif

#define _WE 20 
#define _OE 30 
#define _CE 32 

#define D0 44 
#define D1 4 
#define D2 5 
#define D3 39 
#define D4 36 
#define D5 37
#define D6 34 
#define D7 35

#define ADR0 42
#define ADR1 40 
#define ADR2 38 
#define ADR3 46 
#define ADR4 48 
#define ADR5 6
#define ADR6 7 
#define ADR7 49
#define ADR8 26
#define ADR9 28 
#define ADR10 33 
#define ADR11 31 
#define ADR12 47 
#define ADR13 24
#define ADR14 22 
#define ADR15 45
#define ADR16 43 
#define ADR17 21 // N/C for 010A
#define ADR18 41 // N/C for 010A, 020A

File file;

char filename[256];// = "FSM_U4.ROM";


int addresses[] = 
  {
   ADR0, ADR1, ADR2, ADR3, 
   ADR4, ADR5, ADR6, ADR7, 
   ADR8, ADR9, ADR10, ADR11,
   ADR12, ADR13, ADR14, ADR15,
   ADR16, ADR17, ADR18
  };

int data[] =
  {
    D0, D1, D2, D3,
    D4, D5, D6, D7
  };

#define SD_SS_PIN 53

void writeByte(uint32_t address, uint8_t val)
{
  setWrite();

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0xAA);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x2AAA);
  digitalWrite2(_WE, LOW);
  writeData(0x55);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0xA0);
  digitalWrite2(_WE, HIGH);

  writeAddress((uint32_t)address);
  digitalWrite2(_WE, LOW);
  writeData(val);
  digitalWrite2(_WE, HIGH);

  delayMicroseconds(20);

}

void setRead()
{
  digitalWrite2(_WE, HIGH);
  digitalWrite2(_OE, LOW);
  for(uint32_t i = 0; i < 8; i++)
  {
    pinMode2(data[i], INPUT);
  }
}

void setWrite()
{
  for(uint32_t i = 0; i < 8; i++)
  {
    pinMode2(data[i], OUTPUT);
  }
}

void setup() {
  Serial.begin(57600);
  SD.begin();
  

  for(uint32_t i = 0; i < addr_size; i++)
  {
    pinMode2(addresses[i], OUTPUT);
  }
  pinMode2(_WE, OUTPUT);
  pinMode2(_OE, OUTPUT);
  pinMode2(_CE, OUTPUT);

  digitalWrite2(_CE, LOW);
  digitalWrite2(_OE, HIGH);
  digitalWrite2(_WE, HIGH);

  Serial.print("Enter filename: ");
  while (Serial.available() == 0)
  {

  }
  String fname = Serial.readString();
  Serial.println(fname);
  fname.trim();
  fname.toCharArray(filename, 256);

  setWrite();
  if(getHWID() != chip_id)
  {
    Serial.println("ERR: Cannot read flash (invalid model or not inserted)");
    Serial.println((int)getHWID());
    return;
  }

  eraseChip();

  if(SD.exists(filename))
  {
    file = SD.open(filename, FILE_READ);
    Serial.print("READING FILE ");
    Serial.println(filename);
    uint32_t x = file.size();
    Serial.print("FILE SIZE: ");
    Serial.print(x);
    Serial.println(" bytes");

    uint32_t addr = 0;
    uint8_t oldPct = 0;
    progressBar(oldPct);
    //char initial = file.read();
    for(uint32_t i = 0; i < min(((uint32_t)1 << addr_size), file.size()); i++)
    {
      char c = file.read();
      //Serial.println((int)c);
      uint8_t byte = 0;
      do
      {
        digitalWrite2(_OE, HIGH);
        digitalWrite2(_WE, HIGH);
        writeByte(i, c);
        //byte = c;
        
        setRead();
        digitalWrite2(_WE, HIGH);
        digitalWrite2(_OE, LOW);
        writeAddress(i);
        byte = readByte();
      }
      while(byte != (uint8_t)c);
      ++addr;
      uint8_t newPct = addr * 100 / file.size();
      if(newPct != oldPct)
      {
        oldPct = newPct;
        progressBar(oldPct);
      }
    }
    
    Serial.print("Success!! Wrote ");
    Serial.print(addr);
    Serial.println(" bytes.");
  }
  else
  {
    Serial.println("ERR: INVALID FILENAME");
    Serial.println(filename);
  }

/*
  setRead();
  for(uint32_t i = (uint32_t)1 << 17; i < ((uint32_t)1 << 17) + 10; i++)
  {
    writeAddress(i);
    Serial.println((uint32_t)readByte());
  }
*/


  
  

/*
  delay(2);
  


  writeByte(0x0000, 0x75);
  writeByte(0x0001, 0x98);
  setRead();
  writeAddress(0x0001);
  Serial.println((int)readByte());
*/


}

void progressBar(uint8_t pct)
{
  Serial.print('[');
  int complete = pct / 4;
  int todo = 25 - complete;
  for(int i = 0; i < complete; i++)
  {
    Serial.print('#');
  }
  for(int i = 0; i < todo; i++)
  {
    Serial.print('.');
  }
  Serial.print(']');
  Serial.print(" (");
  Serial.print((int)pct);
  Serial.println("%)");
}

void writeAddress(uint32_t address)
{
  for(uint32_t i = 0; i < addr_size; i++)
  {
    digitalWrite2(addresses[i], address % 2);
    address /= 2;
  }
}

uint8_t readByte()
{
  uint8_t result = 0;
  setRead();
  
  for(uint32_t i = 0; i < 8; i++)
  {
    result <<= 1;
    result |= digitalRead2(data[8 - i - 1]);
  }
  return result;
}

void writeData(uint8_t val)
{
  for(uint8_t i = 0; i < 8; i++)
  {
    digitalWrite2(data[i], val % 2);
    val /= 2;
  }
}

void eraseChip()
{
  setWrite();

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0xAA);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x2AAA);
  digitalWrite2(_WE, LOW);
  writeData(0x55);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0x80);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0xAA);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x2AAA);
  digitalWrite2(_WE, LOW);
  writeData(0x55);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0x10);
  digitalWrite2(_WE, HIGH);

  delay(125); // little bit of extra padding

}

uint8_t getHWID()
{
  setWrite();

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0xAA);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x2AAA);
  digitalWrite2(_WE, LOW);
  writeData(0x55);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0x90);
  digitalWrite2(_WE, HIGH);
  digitalWrite2(_CE, HIGH);
  digitalWrite2(_CE, LOW);
  digitalWrite2(_OE, LOW);

  writeAddress(0x0001);
  uint8_t byte = readByte();
  digitalWrite2(_OE, HIGH);
  /*
  if(byte == chip_id)
  {
    Serial.println("VALID chip!");
  }
  Serial.println((int)byte);
  */

  setWrite();
  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0xAA);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x2AAA);
  digitalWrite2(_WE, LOW);
  writeData(0x55);
  digitalWrite2(_WE, HIGH);

  writeAddress(0x5555);
  digitalWrite2(_WE, LOW);
  writeData(0xF0);
  digitalWrite2(_WE, HIGH);
  digitalWrite2(_CE, HIGH);
  digitalWrite2(_CE, LOW);
  return byte;
}

void loop() {
  // put your main code here, to run repeatedly:

}
