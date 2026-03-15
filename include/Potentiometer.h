#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

#include <Arduino.h>

class Potentiometer {
    private:
        int pin;
    
    public:
        Potentiometer(int pin);

        // getter
        int getPin();

        // setter
        void setPin(int pin);

        int degreeFormula();
};

#endif //POTENTIOMETER_H