#include "active-buzzer.h"

Active_Buzzer::Active_Buzzer(int pin){
	pinMode(pin, OUTPUT);
	_pin = pin;
}

void Active_Buzzer::write(int value){
	analogWrite(_pin, value);
}