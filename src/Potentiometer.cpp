#include "Potentiometer.h"

Potentiometer::Potentiometer(int pin) 
: pin(pin)
{
    pinMode(pin, INPUT);
}

int Potentiometer::degreeFormula() {
    int value = analogRead(this->pin);
    return map(value, 0, 1023, 0, 180);
}

// getter
int Potentiometer::getPin() {
    return this->pin;
}

// setter
void Potentiometer::setPin(int pin) {
    this->pin = pin;
}