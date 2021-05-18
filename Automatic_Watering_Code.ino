#include <dht.h>
#define DHT11_PIN 2
dht DHT;
int sensor_pin = A0;
int output_value;
void setup()
{
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  Serial.println("Reading from the Sensor....");

  delay(2000);
  
}

   void loop()
   {
    int chk=DHT.read11(DHT11_PIN);
    Serial.print("Humidity: ");
    Serial.print(DHT.humidity,1);
    Serial.print(" Temperature: ");
    Serial.print(DHT.temperature,1);

    output_value= analogRead(sensor_pin);
    output_value = map(output_value,550,10,0,100);
    Serial.print(" Moisture : ");
    Serial.print(output_value);
    Serial.println("%");

    if(output_value<0)
     {
      digitalWrite(8,HIGH);
     }
     else
     {
      digitalWrite(8,LOW);
     }

   delay(5000);
   }
