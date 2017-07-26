#ifndef _XY_AXIS_JOYSTICK_H_
#define _XY_AXIS_JOYSTICK_H_

#include <Arduino.h>
#include <math.h>

class Temperature_Sensor{
    public:
        Temperature_Sensor(int pin);
        int read_raw();
        double read();
    private:
        int _pin;
};

#endif
