#ifndef _TEMPERATURE_SENSOR_
#define _TEMPERATURE_SENSOR_

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
