#include <DHT.h>

DHT dht(26, DHT11);
#define soil_moisture_pin 4
void setup() {
  // put your setup code here, to run once:
  dht.begin();
  delay(2000);
  Serial.begin(115200);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temp: ");
  Serial.print(temp);
  Serial.print(" °C ");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" % ");
  Serial.println(analogRead(soil_moisture_pin));
  delay(2000);

}
