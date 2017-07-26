#ifndef _ACTIVE_BUZZER_
#define _ACTIVE_BUZZER_

#include <Arduino.h>

class Active_Buzzer{
    public:
        Active_Buzzer(int pin);
        void write(int value);
    private:
        int _pin;
};

#endif
