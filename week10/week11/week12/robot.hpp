//header file for our robot class
//our function declarations go here.
//we will define funcions in "robot.cpp"

//this keep any code from adding this robot twice 
#pragma once

#include <iostream>
using namespace std;

class robot {
public:
    string name;
    int charge;

    // we define the default vaues in the declartion 
    robot(string n = "rob", int c = 10);
    void status();
};
