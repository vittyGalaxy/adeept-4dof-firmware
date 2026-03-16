#include "Arm.h"

Arm::Arm(Joint& base, Joint& shoulder, Joint& elbow, Joint& wrist, Joint& grip) 
: base(base), shoulder(shoulder), elbow(elbow), wrist(wrist), grip(grip)
{
    setBase(base);
    setShoulder(shoulder);
    setElbow(elbow);
    setWrist(wrist);
    setGrip(grip);
}

// getter
Joint Arm::getBase(){
    return this->base;
}

Joint Arm::getShoulder(){
    return this->shoulder;
}

Joint Arm::getElbow(){
    return this->elbow;
}

Joint Arm::getWrist(){
    return this->wrist;
}

Joint Arm::getGrip(){
    return this->grip;
}

// setter
void Arm::setBase(Joint& base){
    this->base = base;
}

void Arm::setShoulder(Joint& shoulder){
    this->shoulder = shoulder;
}

void Arm::setElbow(Joint& elbow){
    this->elbow = elbow;
}

void Arm::setWrist(Joint& wrist){
    this->wrist = wrist;
}

void Arm::setGrip(Joint& grip){
    this->grip = grip;
}