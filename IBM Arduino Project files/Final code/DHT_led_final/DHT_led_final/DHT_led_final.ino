
//Dht11 and led

#include <Adafruit_Sensor.h>
#include <DHT.h> 
int length = 1;
#define DHTPIN A2
#define DHTTYPE DHT11
#define LED_TOO_COLD 4
#define LED_PERFECT 5
#define LED_TOO_HOT 6
#define buzz 13
DHT dht(DHTPIN, DHTTYPE); 
void setup()
 { 
    Serial.begin(9600); 
    Serial.println("DHT11 test!"); dht.begin(); 
    } 
void loop() 
    { 
    pinMode (4, OUTPUT); 
    pinMode (5 , OUTPUT);
    pinMode (6 , OUTPUT); 
    pinMode(13,OUTPUT);
    delay(2000); 
     float h = dht.readHumidity();
     float t = dht.readTemperature();
     float f = dht.readTemperature(true);
     if (isnan(h) || isnan(t) || isnan(f)) 
 { 
Serial.println("Failed to read from DHT sensor!");
 return; 
 } 
   Serial.print("Humidity: ");
   Serial.print(h);
   Serial.print(" %\t");
   Serial.print("Temperature: ");
   Serial.print(t); 
   Serial.println(" *C "); 
    if (t <= 20) 
        { 
  Serial.println("Too cold!"); 
        digitalWrite(4, HIGH);
        digitalWrite(13,HIGH);
        delay (1000);
        digitalWrite(13,LOW);
        digitalWrite(5, LOW);
         } 
    if (20 < t < 27)
     { 
  Serial.println("Perfect temperature!"); 
        digitalWrite(5, HIGH);
        delay (1000); 
        digitalWrite(5, LOW); 
      } 
    if (t >= 32)
      { 
   Serial.println("Too hot!"); 
        digitalWrite(6, HIGH); 
        digitalWrite(13,HIGH);
        delay (1000); 
        digitalWrite(13,LOW);
        digitalWrite(6, LOW); 
      }
}
