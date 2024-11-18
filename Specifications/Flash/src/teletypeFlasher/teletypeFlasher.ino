#include <SPI.h>
#include <DIO2.h>

#define SST_39SF010
//#define SST_39SF020
//#define SST_39SF040

int id = 1; // 0 for keys, 1 for shift code

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

  setWrite();
  if(getHWID() != chip_id)
  {
    Serial.println("ERR: Cannot read flash (invalid model or not inserted)");
    Serial.println((int)getHWID());
    return;
  }
  if(id == 0)
  {
    Serial.println("Writing teletype keys ...");
  }
  if(id == 1)
  {
    Serial.println("Writing teletype shift code ...");
  }

  eraseChip();

  int oldPct = 0;
  progressBar(oldPct);
  for(uint32_t i = 0; i < (uint32_t)1 << 17; i++)
  {
    writeByte(i, 0);
    int newPct = i * 100 / ((uint32_t)1 << 17);
    if(oldPct != newPct)
    {
      oldPct = newPct;
      progressBar(newPct);
    }
  }
  if(id == 0)
  {
    writeByte(0x61, 0x41);
    writeByte(0x62, 0x42);
    writeByte(0x63, 0x43);
    writeByte(0x64, 0x44);
    writeByte(0x65, 0x45);
    writeByte(0x66, 0x46);
    writeByte(0x67, 0x47);
    writeByte(0x68, 0x48);
    writeByte(0x69, 0x49);
    writeByte(0x6A, 0x4A);
    writeByte(0x6B, 0x4B);
    writeByte(0x6C, 0x4C);
    writeByte(0x6D, 0x4D);
    writeByte(0x6E, 0x4E);
    writeByte(0x6F, 0x4F);
    writeByte(0x70, 0x50);
    writeByte(0x71, 0x51);
    writeByte(0x72, 0x52);
    writeByte(0x73, 0x53);
    writeByte(0x74, 0x54);
    writeByte(0x75, 0x55);
    writeByte(0x76, 0x56);
    writeByte(0x77, 0x57);
    writeByte(0x78, 0x58);
    writeByte(0x79, 0x59);
    writeByte(0x7A, 0x5A);
    writeByte(0x41, 0x41);
    writeByte(0x42, 0x42);
    writeByte(0x43, 0x43);
    writeByte(0x44, 0x44);
    writeByte(0x45, 0x45);
    writeByte(0x46, 0x46);
    writeByte(0x47, 0x47);
    writeByte(0x48, 0x48);
    writeByte(0x49, 0x49);
    writeByte(0x4A, 0x4A);
    writeByte(0x4B, 0x4B);
    writeByte(0x4C, 0x4C);
    writeByte(0x4D, 0x4D);
    writeByte(0x4E, 0x4E);
    writeByte(0x4F, 0x4F);
    writeByte(0x50, 0x50);
    writeByte(0x51, 0x51);
    writeByte(0x52, 0x52);
    writeByte(0x53, 0x53);
    writeByte(0x54, 0x54);
    writeByte(0x55, 0x55);
    writeByte(0x56, 0x56);
    writeByte(0x57, 0x57);
    writeByte(0x58, 0x58);
    writeByte(0x59, 0x59);
    writeByte(0x5A, 0x5A);
    writeByte(0x30, 0x30);
    writeByte(0x31, 0x31);
    writeByte(0x32, 0x32);
    writeByte(0x33, 0x33);
    writeByte(0x34, 0x34);
    writeByte(0x35, 0x35);
    writeByte(0x36, 0x36);
    writeByte(0x37, 0x37);
    writeByte(0x38, 0x38);
    writeByte(0x39, 0x39);
    writeByte(0x21, 0x31);
    writeByte(0x40, 0x32);
    writeByte(0x23, 0x33);
    writeByte(0x24, 0x34);
    writeByte(0x25, 0x35);
    writeByte(0xA2, 0x36);
    writeByte(0x26, 0x37);
    writeByte(0x2A, 0x38);
    writeByte(0x28, 0x39);
    writeByte(0x29, 0x30);
    writeByte(0x2D, 0x2D);
    writeByte(0x5F, 0x2D);
    writeByte(0x3D, 0x3D);
    writeByte(0x2B, 0x3D);
    writeByte(0x5B, 0x5B);
    writeByte(0x5D, 0x5B);
    writeByte(0x3A, 0x3B);
    writeByte(0x3B, 0x3B);
    writeByte(0x27, 0x27);
    writeByte(0x22, 0x27);
    writeByte(0x2E, 0x2E);
    writeByte(0x2C, 0x2C);
    writeByte(0x2F, 0x2F);
    writeByte(0x3F, 0x2F);
    writeByte(0x3C, 0x57);
    writeByte(0x3E, 0x55);
    writeByte(0xA7, 0x5A);
    writeByte(0xB6, 0x59);
    writeByte(0xB2, 0x58);
    writeByte(0xB3, 0x56);
    writeByte(0x08, 0x08);
    writeByte(0x20, 0x20);
    writeByte(0x0A, 0x0A);
  }
  if(id == 1)
  {
    writeByte(0x61, 0b00);
    writeByte(0x62, 0b00);
    writeByte(0x63, 0b00);
    writeByte(0x64, 0b00);
    writeByte(0x65, 0b00);
    writeByte(0x66, 0b00);
    writeByte(0x67, 0b00);
    writeByte(0x68, 0b00);
    writeByte(0x69, 0b00);
    writeByte(0x6A, 0b00);
    writeByte(0x6B, 0b00);
    writeByte(0x6C, 0b00);
    writeByte(0x6D, 0b00);
    writeByte(0x6E, 0b00);
    writeByte(0x6F, 0b00);
    writeByte(0x70, 0b00);
    writeByte(0x71, 0b00);
    writeByte(0x72, 0b00);
    writeByte(0x73, 0b00);
    writeByte(0x74, 0b00);
    writeByte(0x75, 0b00);
    writeByte(0x76, 0b00);
    writeByte(0x77, 0b00);
    writeByte(0x78, 0b00);
    writeByte(0x79, 0b00);
    writeByte(0x7A, 0b00);
    writeByte(0x41, 0b01);
    writeByte(0x42, 0b01);
    writeByte(0x43, 0b01);
    writeByte(0x44, 0b01);
    writeByte(0x45, 0b01);
    writeByte(0x46, 0b01);
    writeByte(0x47, 0b01);
    writeByte(0x48, 0b01);
    writeByte(0x49, 0b01);
    writeByte(0x4A, 0b01);
    writeByte(0x4B, 0b01);
    writeByte(0x4C, 0b01);
    writeByte(0x4D, 0b01);
    writeByte(0x4E, 0b01);
    writeByte(0x4F, 0b01);
    writeByte(0x50, 0b01);
    writeByte(0x51, 0b01);
    writeByte(0x52, 0b01);
    writeByte(0x53, 0b01);
    writeByte(0x54, 0b01);
    writeByte(0x55, 0b01);
    writeByte(0x56, 0b01);
    writeByte(0x57, 0b01);
    writeByte(0x58, 0b01);
    writeByte(0x59, 0b01);
    writeByte(0x5A, 0b01);
    writeByte(0x30, 0b00);
    writeByte(0x31, 0b00);
    writeByte(0x32, 0b00);
    writeByte(0x33, 0b00);
    writeByte(0x34, 0b00);
    writeByte(0x35, 0b00);
    writeByte(0x36, 0b00);
    writeByte(0x37, 0b00);
    writeByte(0x38, 0b00);
    writeByte(0x39, 0b00);
    writeByte(0x21, 0b01);
    writeByte(0x40, 0b01);
    writeByte(0x23, 0b01);
    writeByte(0x24, 0b01);
    writeByte(0x25, 0b01);
    writeByte(0xA2, 0b01);
    writeByte(0x26, 0b01);
    writeByte(0x2A, 0b01);
    writeByte(0x28, 0b01);
    writeByte(0x29, 0b01);
    writeByte(0x2D, 0b00);
    writeByte(0x5F, 0b01);
    writeByte(0x3D, 0b00);
    writeByte(0x2B, 0b01);
    writeByte(0x5B, 0b00);
    writeByte(0x5D, 0b01);
    writeByte(0x3A, 0b01);
    writeByte(0x3B, 0b00);
    writeByte(0x27, 0b00);
    writeByte(0x22, 0b01);
    writeByte(0x2E, 0b00);
    writeByte(0x2C, 0b00);
    writeByte(0x2F, 0b00);
    writeByte(0x3F, 0b01);
    writeByte(0x3C, 0b10);
    writeByte(0x3E, 0b10);
    writeByte(0xA7, 0b10);
    writeByte(0xB6, 0b10);
    writeByte(0xB2, 0b10);
    writeByte(0xB3, 0b10);
    writeByte(0x08, 0b00);
    writeByte(0x20, 0b00);
    writeByte(0x0A, 0b00);
  }

  Serial.println("Success!!");

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
