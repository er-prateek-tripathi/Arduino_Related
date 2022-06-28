
int buzzerPin = 13;  //BUZZER INPUT PIN.
int pirPin = 10;  //MOTION SENSOR INPUT PIN.
int sensorValue = LOW;//DEFAULT SENSOR STATE.
void setup() 
{  //INITIAL SETTINGS/ASSIGNMETN.
pinMode(buzzerPin,OUTPUT);//SET BUZZER AS OUTPUT.
pinMode(pirPin, INPUT);//SET PIR AS INPUT.
 Serial.begin(9600);   //serial monitor
}
void loop()
{  //COMMAND TO BE REPEATED.
sensorValue = digitalRead(pirPin); //READ PIR INPUT PIN.
  if ( sensorValue == HIGH) 
{//IF MOTION IS DETECTED.
 tone(buzzerPin, 2000);   //BUZZ THE BUZZER
  delay(500); //TIME DIFFERENCE BETWEEN HIGH(ON)& LOW(OFF).
sensorValue = analogRead(pirPin); 
 Serial.println("motion found : ");
 Serial.println(sensorValue);
    delay(1500);
  }
  else {     //IF NO MOTION IS DETECTED.
noTone(buzzerPin);    //SILENT THE BUZZER.
sensorValue = analogRead(pirPin); 
 Serial.println("no motion : ");
 Serial.println(sensorValue);
    delay(1500);
  }
}
