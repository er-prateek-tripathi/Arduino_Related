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
int i = 0 , j = 0;
void setup()
{
  for(i = 0 ; i < 7 ; i++)
  {
    pinMode(i,OUTPUT);
  }
}
void loop()
{
  for(i = 0 ; i < 10 ; i++)
  {
    for(j = 0 ; j < 7 ; j++)
    {
      digitalWrite(j,arr[i][j]);
    }
   delay(500);
  }
}
