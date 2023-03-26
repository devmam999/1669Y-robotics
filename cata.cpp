#include "main.h"

//set Catapult
void setCata(int power) {
    cata = power;
}

//set Catapult Motor
int cataPower = 0;
void setCataMotor() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
        if (limitSwitch.get_value()) {
            cataPower = 127;
        }
        else {
            cataPower = 0;
        }
    }
    setCata(cataPower);
}
