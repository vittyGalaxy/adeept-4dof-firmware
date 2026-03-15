#include "Joint.h"
 
Joint::Joint(int pin)
: pin(pin)
{
    servo.attach(pin);
}

// getter
int Joint::getPin() {
    return this->pin;
}

int Joint::getValue() {
    return this->value;
}

// setter
void Joint::setPin(int pin) {
    this->pin = pin;
}

void Joint::setDesiredValue(int value) {
    if((value < 180) && (value >= 0)){
        this->servo.write(value);
    }
}