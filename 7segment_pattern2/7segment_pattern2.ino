#include<SoftwareSerial.h>
unsigned char arr[10][7] = {
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,1,0,1,1}
};
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  
}
void loop()
{
  for (int i = 10 ; i > 0 ; --i)
  {
    delay(1000);
    int pin = 2;
    for (int j = 0 ; j < 7 ; j++)
    {
      digitalWrite(pin , arr[i][j]);
      pin++;
    }
  }
  delay(1000);
}
