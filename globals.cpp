#include "main.h"

//intake and cata
pros::Motor intake(1, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor cata(2, pros::E_MOTOR_GEARSET_06, false, pros::E_MOTOR_ENCODER_COUNTS);
pros::Motor_Group intakeCata({intake, cata});
//limitSwitch
pros::ADIDigitalIn limitSwitch('2');
//controller
pros::Controller controller(pros::E_CONTROLLER_MASTER);



