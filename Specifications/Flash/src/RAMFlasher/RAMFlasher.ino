#include <SPI.h>
#include <SD.h>
#include <DIO2.h>

#define _WE 23 
#define _OE 21 
#define _CE 22

#define FINAL_LED 24

#define D0 17 
#define D1 16 
#define D2 15
#define D3 14 
#define D4 12 
#define D5 13
#define D6 2 
#define D7 3
#define D8 4
#define D9 5
#define D10 6
#define D11 7
#define D12 8
#define D13 9
#define D14 10
#define D15 11

#define ADR0 37
#define ADR1 35 
#define ADR2 33 
#define ADR3 31 
#define ADR4 36 
#define ADR5 34
#define ADR6 32
#define ADR7 30
#define ADR8 49
#define ADR9 47 
#define ADR10 45 
#define ADR11 43 
#define ADR12 48 
#define ADR13 46
#define ADR14 44 
#define ADR15 42

#define SHUNT 25

File file;

char filename[256];

int addresses[] = 
  {
   ADR0, ADR1, ADR2, ADR3, 
   ADR4, ADR5, ADR6, ADR7, 
   ADR8, ADR9, ADR10, ADR11,
   ADR12, ADR13, ADR14, ADR15
  };

int data[] =
  {
    D0, D1, D2, D3,
    D4, D5, D6, D7,
    D8, D9, D10, D11,
    D12, D13, D14, D15
  };

#define SD_SS_PIN 53

void writeData(uint16_t val)
{
  for(uint8_t i = 0; i < 16; i++)
  {
    digitalWrite2(data[i], val % 2);
    val /= 2;
  }
  
}

void writeByte(uint16_t address, uint16_t val)
{
  digitalWrite2(_WE, HIGH);
  digitalWrite2(_CE, HIGH);
  digitalWrite2(_OE, HIGH);
  setWrite();

  writeAddress(address);
  writeData(val);
  digitalWrite2(_WE, LOW);
  digitalWrite2(_CE, LOW);
  digitalWrite2(_OE, LOW);
  
  digitalWrite2(_WE, HIGH);
  digitalWrite2(_CE, HIGH);
  digitalWrite2(_OE, HIGH);

}

void setRead()
{
  for(uint8_t i = 0; i < 16; i++)
  {
    pinMode2(data[i], INPUT);
  }
}

void setWrite()
{
  for(uint8_t i = 0; i < 16; i++)
  {
    pinMode2(data[i], OUTPUT);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SD.begin();

  

  for(int i = 0; i < 16; i++)
  {
    pinMode2(addresses[i], OUTPUT);
  }
  for(int i = 0; i < 16; i++)
  {
    pinMode2(data[i], OUTPUT);
  }
  pinMode2(_WE, OUTPUT);
  pinMode2(_CE, OUTPUT);
  pinMode2(_OE, OUTPUT);
  pinMode(SHUNT, OUTPUT);
  digitalWrite2(_CE, HIGH);
  digitalWrite2(_OE, HIGH);
  digitalWrite2(_WE, HIGH);
  pinMode2(FINAL_LED, OUTPUT);
  while(1)
  {
    Serial.print("Enter filename: ");
    while (Serial.available() == 0)
    {

    }
    String fname = Serial.readString();
    fname.trim();
    Serial.println(fname);
    fname.toCharArray(filename, 256);
    uint32_t addr = 0;

    if(SD.exists(filename))
    {
      file = SD.open(filename, FILE_READ);
      Serial.print("READING FILE ");
      Serial.println(filename);
      digitalWrite(SHUNT, HIGH);
      uint8_t c[4096];
      //char initial = file.read();
      while(file.available())
      {
        uint16_t size = file.readBytesUntil('\n', c, 4096);
        uint16_t instr = 0;
        bool empty = true;

        int index = 0;
        for(uint16_t i = 0; i < size; i++)
        {
          
          if(index > 3 || c[i] == '/')
          {
            break;
          }
          else if(c[i] >= '0' && c[i] <= '9')
          {
            instr <<= 4;
            instr |= (c[i] - '0');
            ++index;
            empty = false;
          }
          else if((c[i] >= 'a' && c[i] <= 'z') ||
                  (c[i] >= 'A' && c[i] <= 'Z'))
          {
            instr <<= 4;
            if(c[i] < 'a')
            {
              instr |= (c[i] - 'A' + 10);
            }
            else
            {
              instr |= (c[i] - 'a' + 10);
            }
            ++index;
            empty = false;
          }
        }

        //Serial.println((int)c);
        if(!empty && index == 4)
        {
          writeByte(addr, instr);
          ++addr;
        }
        
      }
      digitalWrite(SHUNT, LOW);
      Serial.print("Success!! Wrote ");
      Serial.print((int)addr);
      Serial.println(" bytes.\n");
      digitalWrite(FINAL_LED, HIGH);
      delay(1000);
      digitalWrite(FINAL_LED, LOW);
      
    }
    else
    {
      Serial.println("ERR: INVALID FILENAME");
      Serial.println(filename);
      return;
    }
  }
}

uint8_t readByte()
{
  uint8_t result = 0;
  pinMode2(_WE, HIGH);
  pinMode2(_OE, LOW);
  pinMode2(_CE, LOW);
  setRead();
  
  for(uint32_t i = 0; i < 16; i++)
  {
    result <<= 1;
    result |= digitalRead2(data[16 - i - 1]);
  }
  return result;
}

void writeAddress(uint32_t address)
{
  for(uint32_t i = 0; i < 16; i++)
  {
    digitalWrite2(addresses[i], address % 2);
    address /= 2;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
