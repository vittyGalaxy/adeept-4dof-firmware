#include <Arduino.h>
#include <Servo.h>
#include "Potentiometer.h"
#include "Joint.h"
#include "definition.h"

Joint joint(PIN_ELBOW);
Potentiometer potentiometer(PIN_POTENTIOMETERS_SHOULDER);

void setup(){
    // setup
    Serial.begin(9600);
}

void loop() {
    // loop
    int value = potentiometer.degreeFormula();
    Serial.println(value);
    joint.setDesiredValue(value);
}