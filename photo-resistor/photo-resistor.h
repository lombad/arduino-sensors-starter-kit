#ifndef _PHOTO_RESISTOR_
#define _PHOTO_RESISTOR_

#include <Arduino.h>

class Photo_Resistor{
    public:
        Photo_Resistor(int pin);
        int read();
    private:
        int _pin;
};

#endif
