#include<SoftwareSerial.h>
int ledPin = 8;
void setup()
{
for(int i=1;i<9;i++)
{
pinMode(i,OUTPUT);
}

}
void loop()
{

delay(3000);
digitalWrite(1,1);
digitalWrite(3,1);
digitalWrite(5,1);
delay(3000);
digitalWrite(1,0);
digitalWrite(5,0);
digitalWrite(2,1);
digitalWrite(4,1);
delay(3000);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(4,0);
delay(3000);
digitalWrite(5,1);
digitalWrite(7,1);
digitalWrite(8,1);
delay(3000);
digitalWrite(5,0);
digitalWrite(7,0);
digitalWrite(1,1);
digitalWrite(2,1);
digitalWrite(3,1);
delay(3000);
digitalWrite(1,0);
digitalWrite(2,0);
digitalWrite(3,0);
digitalWrite(8,0);
delay(3000);
}
