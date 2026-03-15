#ifndef JOINT_H
#define JOINT_H

#include <Servo.h>

class Joint{
    private:
        Servo servo;
        int pin;
        int value;
    
    public:
    Joint(int pin);

    // getter
    int getPin();
    int getValue();

    // setter
    void setPin(int pin);
    void setDesiredValue(int value);
};

#endif //JOINT_H