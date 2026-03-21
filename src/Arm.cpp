#include "Arm.h"

Arm::Arm(Joint& base, Joint& shoulder, Joint& elbow, Joint& wrist, Joint& grip) 
: base(base), shoulder(shoulder), elbow(elbow), wrist(wrist), grip(grip)
{
    
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

// moves
void Arm::moveBase(int degree){
    this->base.setDesiredValue(degree);
}

void Arm::moveShoulder(int degree){
    this->shoulder.setDesiredValue(degree);
}

void Arm::moveElbow(int degree){
    this->elbow.setDesiredValue(degree);
}

void Arm::moveWrist(int degree){
    this->wrist.setDesiredValue(degree);
}

void Arm::moveGrip(int degree){
    this->grip.setDesiredValue(degree);
}