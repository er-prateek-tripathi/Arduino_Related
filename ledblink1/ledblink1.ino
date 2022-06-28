#include<SoftwareSerial.h>
int ledPin = 13;
void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  for( int i = 0; i < 10; i++)
  {
    digitalWrite(ledPin,HIGH);
    delay(5000);
    digitalWrite(ledPin,LOW);
    delay(5000);
  }
}
