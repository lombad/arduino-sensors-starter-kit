#ifndef _XY_AXIS_JOYSTICK_H_
#define _XY_AXIS_JOYSTICK_H_

#include <Arduino.h>

class XY_Axis_Joystick{
    public:
        XY_Axis_Joystick(int pin_x, int pin_y, int pin_key);
        int read_x();
        int read_y();
        int read_key();
    private:
        int _pin_x;
        int _pin_y;
        int _pin_key;
};

#endif
