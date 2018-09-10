#include "temperature-sensor.h"
 
int sensorPin = A5; // select the input pin for the potentiometer

Temperature_Sensor temp(sensorPin);

void setup() {
 Serial.begin(9600);
}
 
void loop() {
 Serial.println(temp.read_raw());
 delay(500);
}
