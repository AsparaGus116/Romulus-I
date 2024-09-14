
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
  digitalWrite(CE, LOW);
  digitalWrite(OE, LOW);
  digitalWrite(WE, HIGH);

}

void setup() {
  pinMode(WE, OUTPUT); // WARNING: ACTIVE LOW
  pinMode(OE, OUTPUT); // WARNING: ACTIVE LOW
  pinMode(CE, OUTPUT); // WARNING: ACTIVE LOW
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
