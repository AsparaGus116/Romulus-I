#define R1 0
#define G1 1
#define B1 2
#define R2 3
#define G2 4
#define B2 5
#define ad_E 6
#define ad_A 7
#define ad_B 8
#define ad_C 9
#define ad_D 10
#define CLK 11
#define LAT 12
#define OE 13

void setup() {
  // put your setup code here, to run once:
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);

  pinMode(ad_A, OUTPUT);
  pinMode(ad_B, OUTPUT);
  pinMode(ad_C, OUTPUT);
  pinMode(ad_D, OUTPUT);
  pinMode(ad_E, OUTPUT);

  pinMode(CLK, OUTPUT);
  pinMode(LAT, OUTPUT);
  pinMode(OE, OUTPUT);

  digitalWrite(ad_A, LOW);
  digitalWrite(R1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(G2, HIGH);
  digitalWrite(B2, HIGH);

}

void loop() {
  digitalWrite(OE, LOW);
  for(int j = 0; j < 32; j++)
  {
    for(int i = 0; i < 128; i++)
    {
      if(i == 0)
      {
        digitalWrite(LAT, HIGH);
      }
      else if(i == 1)
      {
        digitalWrite(LAT, LOW);
      }
      digitalWrite(CLK, LOW);
      delayMicroseconds(1);
      digitalWrite(CLK, HIGH);
    }
  }
  
  
}
