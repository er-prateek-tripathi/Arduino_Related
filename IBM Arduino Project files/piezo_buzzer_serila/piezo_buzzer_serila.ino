 const int buzzer1 = 4;
 const int buzzer2 = 5;
 const int buzzer3 = 6;
 const int buzzer4 = 7;
 const int buzzer5 = 8;
void setup()
{
pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
     pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
}
void loop()
{
    //buzzer1
tone(buzzer1, 1500);  
     noTone(buzzer1);
    delay(500);
    //buzzer2
    tone(buzzer2, 1500);   
  noTone(buzzer2); 
    delay(500);
    //buzzer3
    tone(buzzer3, 1500);      
   noTone(buzzer3);
    delay(500);
    //buzzer4
    tone(buzzer4, 1500);      
   noTone(buzzer4);
    delay(500);
    //buzzer5
    tone(buzzer5, 1500);  
    noTone(buzzer5);
    delay(500);
}