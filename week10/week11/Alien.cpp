// mel sampson coding 1
//creating a class in class

#include <iostream>
#include <string>
using namespace std;
#include<chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <vector>

vector<string> planets = {"earth","Alderann","sol","mars"};
vector<string> fly = {"non existent","super high"};

class Alien {
public:
    string name;
    int limbCount;
    string threatLevel;
    string homePlanet;
    string canFly;
};
    Alien() {
        limbCount = rand() % 4 + 2;
        homePlanet = planets[rand() %  planets.size()]
        threatLevel = rand() % 4 + 2;
        canFly = fly[rand() % fly.size()]
    }
int main() {
    srand(time(0));
    cout <<"lets meet some alien\n";

    Alien Jackass;
    cout << "this creature has" << Jackass.limbCount << "limbs!\n";
    cout << "Hello im from" << Jackass.homePlanet << ".\n";
    cout << "My threat level is" << Jackass.threatLevel << ".\n";
    cout << "My ablity to fly is" <<Jackass.canFly <<".\n";
}








