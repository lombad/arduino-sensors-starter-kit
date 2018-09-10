#include "photo-resistor.h"
 
int sensorPin = A5;

Photo_Resistor photo(sensorPin);

void setup() {
 Serial.begin(9600);
}
 
void loop() {
 Serial.println(photo.read());
 delay(500);
}
