#include<SoftwareSerial.h>
 int ledpin1 =13;
 int ledpin2 =12;
 int ledpin3 =11;
 int ledpin4 =10;
 int ledpin5 =9;
 int ledpin6 =8;
 int ledpin7 =7;
 int ledpin8 =6;
void setup()
{
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
  pinMode(ledpin4,OUTPUT);
  pinMode(ledpin5,OUTPUT);
  pinMode(ledpin6,OUTPUT);
  pinMode(ledpin7,OUTPUT);
  pinMode(ledpin8,OUTPUT);
    
}

void loop()
{
  for(int i=0;i<5;i++)
  {
  digitalWrite(ledpin1,HIGH);
  digitalWrite(ledpin2,HIGH);
  digitalWrite(ledpin3,HIGH);
  digitalWrite(ledpin4,HIGH);
  digitalWrite(ledpin5,LOW);
  digitalWrite(ledpin6,LOW);
  digitalWrite(ledpin7,LOW);
  digitalWrite(ledpin8,LOW);
  delay(5000);
  digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
  digitalWrite(ledpin3,LOW);
  digitalWrite(ledpin4,LOW);
  digitalWrite(ledpin5,HIGH);
  digitalWrite(ledpin6,HIGH);
  digitalWrite(ledpin7,HIGH);
  digitalWrite(ledpin8,HIGH);
  delay(5000);
  
  } 
}
