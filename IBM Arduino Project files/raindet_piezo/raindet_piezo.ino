void setup() 
{ 
//on pin5 we have the rain sensor so this is an input 
pinMode(5, INPUT); 
//on pin 12 we have buzzer so this is an output 
pinMode(8, OUTPUT); 
} 
void loop()
 { 
//when rain sensor gives LOW signal it means that it rains 
if(digitalRead(5) == LOW)
{ 
//for half a second we turn the buzzer on 

digitalWrite(8, HIGH); 
delay(500);
 //for half a second we turn the buzzer off 

digitalWrite(8, LOW); 
delay(500); 
//so we have the beep-beep signal like an alarm
 } 
}
