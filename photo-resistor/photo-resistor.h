#ifndef _PHOTO_RESISTOR_H_
#define _PHOTO_RESISTOR_H_

#include <Arduino.h>

class Photo_Resistor{
    public:
        Photo_Resistor(int pin);
        int read();
    private:
        int _pin;
};

#endif
