
#define A0 42
#define A1 40
#define A2 38
#define A3 46
#define A4 48
#define A5 50
#define A6 52
#define A7 49
#define A8 26
#define A9 28
#define A10 33
#define A11 31
#define A12 47
#define A13 24
#define A14 22
#define A15 45
#define A16 43

#define WE 20
#define OE 30
#define CE 32

#define D0 44
#define D1 53
#define D2 51
#define D3 39
#define D4 36
#define D5 37
#define D6 34
#define D7 35

int a[] = {A0, A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16};
int d[] = {D0, D1, D2, D2, D4, D5, D6, D7};

void setRead(int arr[], int pinCount)
{
  for(int i = 0; i < pinCount; i++)
  {
    pinMode(arr[i], INPUT);
  }
}

void setWrite(int arr[], int pinCount)
{
  for(int i = 0; i < pinCount; i++)
  {
    pinMode(arr[i], OUTPUT);
  }
}

uint8_t readByte(uint32_t addr)
{
  setWrite(a, 17);
  digitalWrite(CE, HIGH);
  digitalWrite(OE, HIGH);
  digitalWrite(WE, HIGH);

  setAddr(addr);
  digitalWrite(CE, LOW);
  digitalWrite(OE, LOW);

  for(int i = 0; i < 2; i++)
  {
    tinyDelay();
  }

  int res = 0;

  setRead(d, 8);

  for(int i = 7; i >= 0; i--)
  {
    res += digitalRead(d[i]);
    if(res != 0)
    {
      res <<= 1;
    }
  }
  return res;
}

void setAddr(uint32_t addr)
{
  for(int i = 0; i < 17; i++)
  {
    a[i] = addr % 2;
    addr >>= 1;
  }
}

void setData(uint8_t data)
{
  for(int i = 0; i < 8; i++)
  {
    d[i] = data % 2;
    data >>= 1;
  }
}

void chipErase()
{
  digitalWrite(CE, HIGH);
  digitalWrite(OE, HIGH);
  digitalWrite(WE, LOW);
  setAddr(0x5555);
  setData(0xaa); // SW0
  digitalWrite(CE, LOW);
  digitalWrite(OE, HIGH);
  digitalWrite(WE, LOW);
  delayMicroseconds(1);
  setAddr(0x2aaa);
  digitalWrite(WE, HIGH);
  setData(0x55);
  delayMicroseconds(1); // SW1
  digitalWrite(WE, LOW);
  delayMicroseconds(1);
  setAddr(0x5555);
  digitalWrite(WE, HIGH);
  setData(0x80);
  delayMicroseconds(1); // SW2
  digitalWrite(WE, LOW);
  delayMicroseconds(1);
  setAddr(0x5555);
  digitalWrite(WE, HIGH);
  setData(0xAA);
  delayMicroseconds(1); // SW3
  digitalWrite(WE, LOW);
  delayMicroseconds(1);
  setAddr(0x2aaa);
  digitalWrite(WE, HIGH);
  setData(0x55);
  delayMicroseconds(1); // SW4
  digitalWrite(WE, LOW);
  delayMicroseconds(1);
  setAddr(0x5555);
  digitalWrite(WE, HIGH);
  setData(0x10);
  delayMicroseconds(1); // SW5
  digitalWrite(WE, LOW);
  delayMicroseconds(1);
  digitalWrite(WE, HIGH);

}

void writeByte(uint32_t addr, uint8_t data)
{
  setWrite(a, 17);
  setWrite(d, 8);

  setAddr(0x5555);
  setData(0xaa);
  digitalWrite(OE, HIGH);
  digitalWrite(CE, LOW);
  digitalWrite(WE, LOW);
  
  tinyDelay();
  digitalWrite(WE, HIGH);

  setAddr(0x2aaa);
  setData(0x55);
  tinyDelay();

  digitalWrite(WE, LOW);
  tinyDelay();

  digitalWrite(WE, HIGH);
  setAddr(0x5555);
  setData(0xa0);
  tinyDelay();

  digitalWrite(WE, LOW);
  tinyDelay();

  digitalWrite(WE, HIGH);
  setAddr(addr);
  setData(data);
  tinyDelay();

  digitalWrite(WE, LOW);
  tinyDelay();
  digitalWrite(WE, HIGH);
  delayMicroseconds(25);
  digitalWrite(WE, LOW);
  digitalWrite(OE, HIGH);
  digitalWrite(CE, LOW);

}

void tinyDelay() // delays ~62.5 ns
{
  asm volatile("nop");
}

void setup() {
  pinMode(21, OUTPUT);
  pinMode(41, OUTPUT);

  setWrite(d, 8);
  setWrite(a, 17);

  pinMode(WE, OUTPUT); // WARNING: ACTIVE LOW
  pinMode(OE, OUTPUT); // WARNING: ACTIVE LOW
  pinMode(CE, OUTPUT); // WARNING: ACTIVE LOW
  // put your setup code here, to run once:
  digitalWrite(CE, HIGH);
  digitalWrite(OE, LOW);
  digitalWrite(WE, HIGH);
  Serial.begin(115200);
  writeByte(0x0, 0x55);
  Serial.println(readByte(0x0));

}

void loop() {

  //Serial.println(digitalRead(12));
  // put your main code here, to run repeatedly:
  
}
