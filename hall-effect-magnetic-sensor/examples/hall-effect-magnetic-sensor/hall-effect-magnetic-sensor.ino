#include "hall-effect-magnetic-sensor.h"
 
int sensorPin = 10;

Hall_Effect_Magnetic_Sensor hems(sensorPin);

void setup() {
 Serial.begin(9600);
}
 
void loop() {
 Serial.println(hems.read());
 delay(500);
}
