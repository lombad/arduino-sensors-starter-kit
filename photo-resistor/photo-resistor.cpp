#include "photo-resistor.h"

Photo_Resistor::Photo_Resistor(int pin){
	pinMode(pin, INPUT);
	_pin = pin;
}

int Photo_Resistor::read(){
	return analogRead(_pin);
}