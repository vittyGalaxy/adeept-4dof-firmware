#include <Servo.h>

class Arm {
    Servo base;
    Servo shoulder;
    Servo elbow;
    Servo wrist;
    Servo grip;

    Arm(Servo base, Servo shoulder, Servo elbow, Servo wrist, Servo grip) {
        setBase(base);
        setShoulder(shoulder);
        setElbow(elbow);
        setWrist(wrist);
        setGrip(grip);
    }

    // getter
    Servo getBase() {
        return this->base;
    }

    Servo getShoulder() {
        return this->shoulder;
    }

    Servo getElbow() {
        return this->elbow;
    }

    Servo getWrist() {
        return this->wrist;
    }

    Servo getGrip() {
        return this->grip;
    }

    // setter
    void setBase(Servo base){
        this->base = base;
    }

    void setShoulder(Servo shoulder){
        this->shoulder = shoulder;
    }

    void setElbow(Servo elbow){
        this->elbow = elbow;
    }

    void setWrist(Servo wrist){
        this->wrist = wrist;
    }

    void setGrip(Servo grip){
        this->grip = grip;
    }
};