

#define RED1 15
#define GRE1 14
#define BLU1 2
#define RED2 3
#define GRE2 4
#define BLU2 5
#define ad_E 6
#define ad_A 7
#define ad_B 8
#define ad_C 9
#define ad_D 10
#define CLK 11
#define LAT 12
#define OE 13

void setR1(bool x)
{
  if(x)
  {
    PORTJ |= 1;
  }
  else
  {
    PORTJ &= ~(1);
  }
}

void setG1(bool x)
{
  if(x)
  {
    PORTJ |= 0b10;
  }
  else
  {
    PORTJ &= ~(0b10);
  }
}

void setB1(bool x)
{
  if(x)
  {
    PORTE |= 0b10000;
  }
  else
  {
    PORTE &= ~(0b10000);
  }
}

void setR2(bool x)
{
  if(x)
  {
    PORTE |= 0b100000;
  }
  else
  {
    PORTE &= ~(0b100000);
  }
}

void setG2(bool x)
{
  if(x)
  {
    PORTG |= 0b100000;
  }
  else
  {
    PORTG &= ~(0b100000);
  }
}

void setB2(bool x)
{
  if(x)
  {
    PORTE |= 0b1000;
  }
  else
  {
    PORTE &= ~(0b1000);
  }
}

void setup() {
  Serial.begin(57600);
  // put your setup code here, to run once:
  pinMode(RED1, OUTPUT);
  pinMode(RED2, OUTPUT);
  pinMode(GRE1, OUTPUT);
  pinMode(GRE2, OUTPUT);
  pinMode(BLU1, OUTPUT);
  pinMode(BLU2, OUTPUT);

  pinMode(ad_A, OUTPUT);
  pinMode(ad_B, OUTPUT);
  pinMode(ad_C, OUTPUT);
  pinMode(ad_D, OUTPUT);
  pinMode(ad_E, OUTPUT);

  pinMode(CLK, OUTPUT);
  pinMode(LAT, OUTPUT);
  pinMode(OE, OUTPUT);

  //digitalWrite(R1, HIGH);
  //digitalWrite(RED1, HIGH);
  //digitalWrite(GRE2, HIGH);
  setR1(1);
  setR2(1);
  
}

uint16_t c = 0;
bool up = true;

void loop() {
  if(up)
  {
    if(c > 32)
    {
      up = false;
      c = 31;
    }
    else
    {
      c++;
    }
  }
  else
  {
    if(c & 0x80)
    {
      up = true;
      c = 0;
    }
    else
    {
      c--;
    }
  }
  for(uint8_t count = 0; count < 32; count++)
    {
      for(int j = 0; j < 1; j++)
      {
        digitalWrite(OE, LOW);
        for(int i = 0; i < 64; i++)
        {
          if(i == 63)
          {
            digitalWrite(OE, HIGH);
            PORTB |= 0b01000000;
          }
          else
          {
            PORTB &= 0xBF;
          }
          //PORTD |= 0b111;
            PORTB ^= 0b100000;
            /*
            uint16_t c1 = test[64 * j + i];
            uint16_t c2 = test[64 * (j + 32) + i];
            
            uint16_t r1 = ((c1 >> 10) & 0b11111);
            uint16_t g1 = ((c1 >> 5) & 0b11111);
            uint16_t b1 = ((c1) & 0b11111);
            uint16_t r2 = ((c2 >> 10) & 0b11111);
            uint16_t g2 = ((c2 >> 5) & 0b11111);
            uint16_t b2 = ((c2) & 0b11111);
            */
            setR1(c >= count);
            //setR2(c >= count);

            PORTB ^= 0b100000;
          
        }
        int h = ((j & 0b10000) >> 1) | ((j & 0b1) << 4) | ((j & 0b10) << 4) | ((j & 0b100) << 4);
        
        PORTH = (PORTH & 0x87) | h;
        int b = ((j & 0b1000) << 1);
        PORTB = (PORTB & 0xEF) | b;
      }
    }
    delay(10);
    
  
}
