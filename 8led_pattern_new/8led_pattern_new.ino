#include<SoftwareSerial.h>

unsigned char arr[8][8] = {
  {0,0,0,0,0,0,0,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {1,1,0,0,1,1,0,1},
  {0,0,1,1,0,0,1,1},
  {0,0,0,0,1,1,1,1},
  {1,1,1,0,0,0,1,1},
  {1,1,1,1,1,1,1,1}
};
int i = 0 , j = 0;
void setup()
{
  for(i = 0 ; i < 8 ; i++)
  {
    pinMode(i,OUTPUT);
  }
}
void loop()
{
  for(i = 0 ; i < 8 ; i++)
  {
    for(j = 0 ; j < 8 ; j++)
    {
      digitalWrite(j,arr[i][j]);
    }
   delay(500);
  }
}
