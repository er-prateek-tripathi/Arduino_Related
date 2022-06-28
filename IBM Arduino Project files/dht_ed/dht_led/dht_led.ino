#include <Adafruit_Sensor.h>
 #include <DHT.h> 
int length = 1;
 #define DHTPIN A1 
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE); 


void setup()
 { 
 

    Serial.begin(9600); 
    Serial.println("DHT11 test!"); dht.begin(); 

    } 
void loop() 
    {
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

         } 
    if (20 < t < 27)
     { 
Serial.println("Perfect temperature!"); 

      } 
if (t>=33)
  { 
   Serial.println("Too hot!"); 
  
        }
     }
