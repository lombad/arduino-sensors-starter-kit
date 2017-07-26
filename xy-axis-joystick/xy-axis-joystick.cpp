#include "xy-axis-joystick.h"

XY_Axis_Joystick::XY_Axis_Joystick(int pin_x, int pin_y, int pin_key){
	pinMode(pin_x, INPUT);
	_pin_x = pin_x;
	pinMode(pin_y, INPUT);
	_pin_y = pin_y;
	pinMode(pin_key, INPUT_PULLUP);
	_pin_key = pin_key;
}

int XY_Axis_Joystick::read_x(){
	return analogRead(_pin_x);
}

int XY_Axis_Joystick::read_y(){
	return analogRead(_pin_y);
}

int XY_Axis_Joystick::read_key(){
	return digitalRead(_pin_key);
}
