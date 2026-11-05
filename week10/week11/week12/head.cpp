//mel coding onee
//header

#include "robot.hpp"
#include "adv.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    setup();
    robot artoo;
    artoo.status();


    robot baymax("baymax" , dieRoll());
    baymax.status();

    //creating a vector of places
    vector<string> places;
    places.push_back("rome");
    places.push_back("lodon");
    places.push_back("belize");

    cout << "someday i want to go to " << randomElement(places) << ".\n";

    vector<robot> bots;
    for(int i = 0; i < 10; i++) {
        bots.push_back(robot(randomElement(places), dieRoll()));
    }


    cout << "lets talk too";
     randomElement(bots).status();

     
    return 0;
    
}