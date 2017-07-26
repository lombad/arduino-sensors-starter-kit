#ifndef _HALL_EFFECT_MAGNETIC_SENSOR_
#define _HALL_EFFECT_MAGNETIC_SENSOR_

#include <Arduino.h>

class Hall_Effect_Magnetic_Sensor{
    public:
        Hall_Effect_Magnetic_Sensor(int pin);
        int read();
    private:
        int _pin;
};

#endif
