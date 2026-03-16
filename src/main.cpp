#include <Arduino.h>
#include <Servo.h>
#include "Potentiometer.h"
#include "Joint.h"
#include "definition.h"
#include "Arm.h"

Joint jointBase(PIN_BASE);
Joint jointShoulder(PIN_SHOULDER);
Joint jointElbow(PIN_ELBOW);
Joint jointWrist(PIN_WRIST);
Joint jointGrip(PIN_GRIP);
Potentiometer potentiometer(PIN_POTENTIOMETERS_SHOULDER);
Arm oArm(jointBase, jointShoulder, jointElbow, jointWrist, jointGrip);

void setup(){
    // setup
    Serial.begin(9600);
}

void loop() {
    // loop
    int value = potentiometer.degreeFormula();
    Serial.println(value);
    jointShoulder.setDesiredValue(value);
    oArm.setShoulder(jointShoulder);
}