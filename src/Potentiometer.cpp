#include "Potentiometer.h"

Potentiometer::Potentiometer(int pin) 
: pin(pin)
{
    pinMode(pin, INPUT);
}

int Potentiometer::degreeFormula() {
    int value = analogRead(this->pin);
    return static_cast<int>((270 / 1023) * value);
}

// getter
int Potentiometer::getPin() {
    return this->pin;
}

// setter
void Potentiometer::setPin(int pin) {
    this->pin = pin;
}