#include <Arduino.h>
#include <Servo.h>
#include "Potentiometer.h"
#include "Joint.h"
#include "definition.h"
#include "Arm.h"

Joint*          jointBase       = nullptr;
Joint*          jointShoulder   = nullptr;
Joint*          jointElbow      = nullptr;
Joint*          jointWrist      = nullptr;
Joint*          jointGrip       = nullptr;
Arm*            poArm           = nullptr; 

Potentiometer*  poPotBase       = nullptr;
Potentiometer*  poPotShoulder   = nullptr;
Potentiometer*  poPotElbow      = nullptr;
Potentiometer*  poPotWrist      = nullptr;
Potentiometer*  poPotGrip       = nullptr;


/*----------------------------------------------------------------------*/
void setup(){
    // setup
    Serial.begin(9600);

    // Pot
    poPotBase       = new Potentiometer(PIN_POTENTIOMETERS_BASE);
    poPotShoulder   = new Potentiometer(PIN_POTENTIOMETERS_SHOULDER);
    poPotElbow      = new Potentiometer(PIN_POTENTIOMETERS_ELBOW);
    poPotWrist      = new Potentiometer(PIN_POTENTIOMETERS_WRIST);
    poPotGrip       = new Potentiometer(PIN_POTENTIOMETERS_GRIP);

    // Joint
    jointBase       = new Joint(PIN_BASE);
    jointShoulder   = new Joint(PIN_SHOULDER);
    jointElbow      = new Joint(PIN_ELBOW);
    jointWrist      = new Joint(PIN_WRIST);
    jointGrip       = new Joint(PIN_GRIP);

    // Adeept
    poArm           = new Arm(*jointBase, *jointShoulder, *jointElbow, *jointWrist, *jointGrip);
}

/*----------------------------------------------------------------------*/
void loop() {
    // loop
    // Serial.println(value);
    jointBase->setDesiredValue(poPotBase->degreeFormula());
    jointShoulder->setDesiredValue(poPotShoulder->degreeFormula());
    jointElbow->setDesiredValue(poPotElbow->degreeFormula());
    jointWrist->setDesiredValue(poPotWrist->degreeFormula());
    jointGrip->setDesiredValue(poPotGrip->degreeFormula());
}