#include "xy-axis-joystick.h"
 
int pin_x = A0;
int pin_y = A1;
int pin_key = 3;

XY_Axis_Joystick joystick(pin_x, pin_y, pin_key);

void setup() {
 Serial.begin(9600);
}
 
void loop() {
 Serial.print("X: ");
 Serial.print(joystick.read_x());
 Serial.print(", Y: ");
 Serial.print(joystick.read_y());
 Serial.print(", KEY: ");
 Serial.println(joystick.read_key());
 delay(1);
}
