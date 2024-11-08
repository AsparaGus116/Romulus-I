#include <SPI.h>
#include <SD.h>
#include <DIO2.h>

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

File file;

char filename[256];// = "FSM_U4.ROM";

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
    D4, D5, D6, D7
  };

#define SD_SS_PIN 53

void writeData(uint8_t val)
{
  for(uint8_t i = 0; i < 8; i++)
  {
    digitalWrite2(data[i], val % 2);
    val /= 2;
  }
}

void writeByte(uint32_t address, uint8_t val)
{
  setWrite();

  writeAddress(address);
  writeData(val);
  digitalWrite2(_CE, LOW);
  digitalWrite2(_WE, LOW);
  digitalWrite2(_OE, LOW);
  
  digitalWrite2(_CE, HIGH);
  digitalWrite2(_WE, HIGH);
  digitalWrite2(_OE, HIGH);

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
  // put your setup code here, to run once:
  Serial.begin(57600);
  digitalWrite2(_CE, HIGH);
  digitalWrite2(_OE, HIGH);
  digitalWrite2(_WE, HIGH);

  for(uint32_t i = 0; i < (uint32_t)1 << 16; i++)
  {
    writeByte(0x0000, 0x00);
    if(i % 1000 == 0)
    {
      Serial.println(i);
    }
  }
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
  for(uint32_t i = 0; i < 16; i++)
  {
    digitalWrite2(addresses[i], address % 2);
    address /= 2;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
