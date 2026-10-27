// mel sampson fall 2026 coding 1
//classes

#include <iostream>
#include <string>
using namespace std;
#include<chrono>
#include <thread>

//classes are custom variable 
//they have their own variables and functions
    //named "data members"
    // and "memeber functions"
    // they also have constructors and destructors
        //whuch run when the obect is created
        //or destoryed

class Robot {
public:
    string name;
    float charge; // 0 to 1, as a percent

    // craete a constructor
    Robot() {
        cout << "\t A new robot appears\n";

    }

    Robot(string givenName, float givenCharge){
         cout << "\t A new robot appears\n";
        name = givenName;
        charge = givenCharge;
        status();
    }

    void status (){
        cout << "hello,my name is" << name << ".\n";
        cout << "I have" << charge * 100 << "% battery left .\n";

    }

    bool sleep () {
        charge += 0.2f;

        //clamp to ceiling

        if(charge > 1) {
            charge = 1;
            return true;}

        this_thread::sleep_for(1s);

        cout << "after some recharging\n, my battery level is now"
        cout << charge * 100 << "%.\n";

        return charge == 1;
    }


};


int main(){
    cout << "lets learn about classes!\n";

    Robot rob; 

    rob.name = "RB-1";
    rob.charge = ".78f";

    cout <<"weve just met" << rob.name << ".\n";
    rob.status();

    cout << "\n lets make another robot \n";
    Robot baymax("Baymax" , 0.2f);

    baymax.sleep();
}

while(baymax.charge < 1){
    baymax.sleep();
}

}