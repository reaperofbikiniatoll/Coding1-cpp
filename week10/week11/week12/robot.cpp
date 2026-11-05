// this is where the difintions are for the robot

#include "robot.hpp"

//this is the defintion for the constructer for the robot class
//default values are not allowed here
robot::robot(string n, int c) {
    name = n;
    charge = c;
    cout << "a new robot has been created.\n";
}

void robot::status() {
    cout << "my name is" << name << ", my charge is " << charge <<".\n";
}