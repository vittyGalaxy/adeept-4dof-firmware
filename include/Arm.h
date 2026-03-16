#ifndef ARM_H
#define ARM_H

#include "Joint.h"

class Arm{
    private:
        Joint base;
        Joint shoulder;
        Joint elbow;
        Joint wrist;
        Joint grip;
    
    public:
    Arm(Joint& base, Joint& shoulder, Joint& elbow, Joint& wrist, Joint& grip);

    // getter
    Joint getBase();
    Joint getShoulder();
    Joint getElbow();
    Joint getWrist();
    Joint getGrip();

    // setter
    void setBase(Joint& base);
    void setShoulder(Joint& shoulder);
    void setElbow(Joint& elbow);
    void setWrist(Joint& wrist);
    void setGrip(Joint& grip);
};

#endif //ARM_H