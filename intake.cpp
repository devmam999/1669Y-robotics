#include "main.h"

//setting intake
void setIntake(int power) {
    intakeCata = power;
}

//set intake Power
int intakePower = 0;
bool intakeOn = false;
void setIntakeMotor() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
        intakeOn = !intakeOn;
        if (intakeOn) {
            intakePower = 127;
        }
        else {
            intakePower = 0;
        }
    }
    setIntake(intakePower);
}
