#include "main.h"

void setIntakeCata(int power) {
    intakeCata = power;
}

int intakeCataPower = 0;
bool intakeCataOn = false;
bool lsSensorOn = false;

void setIntakeCataMotor() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) intakeCataOn = !intakeCataOn;
    if (intakeCataOn && !controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        intakeCataPower = 127;
    }
    else if (!intakeCataOn) {
        if (!limitSwitch.get_value()) {
            intakeCataPower = 127;
        }
        else if (limitSwitch.get_value() && !controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
            intakeCataPower = 0;
        }  
        if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
            while (limitSwitch.get_value()) {
                intakeCataPower = 127;
            }
        }
    }
    setIntakeCata(intakeCataPower);
}
