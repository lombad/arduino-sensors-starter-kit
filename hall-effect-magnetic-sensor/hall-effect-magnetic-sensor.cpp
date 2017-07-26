#include "hall-effect-magnetic-sensor.h"

Hall_Effect_Magnetic_Sensor::Hall_Effect_Magnetic_Sensor(int pin){
	pinMode(pin, INPUT);
	_pin = pin;
}

int Hall_Effect_Magnetic_Sensor::read(){
	return digitalRead(_pin);
}