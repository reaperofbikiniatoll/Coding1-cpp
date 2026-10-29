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


class Alien {
public:
    string name;
    int limbCount;
    int threatLevel;
    string homePlanet;
    string canFly;
};

    Alien(){
        limbCount = rand() % 4 + 2;
        homePlanet = planets[rand() %  planets.size()]
        threatLevel = rand() % 4 + 2;
        canFly = rand() % 2 == 0 ? "No" : "Yes";
    }
//consturture
    Alien(int limbs, string flying, int threat, string planet) {
        limbCount = limbs;
        canFly = flying;
        threatLevel = threat;
        homePlanet = planet;
    }
    contact 
   void Contact() {
        cout << "Hello! I come from " << homePlanet << ".\n";

        if (threatLevel <= 3) {
            cout << "We come in peace!\n";
        }
        else {
            cout << "We may be dangerous!\n";
        }
    }
        void Depart() {
        if (canFly == "Yes") {
            cout << "The alien flies away!\n";
        }
        else {
            cout << "The alien walks away!\n";
        }
    }

int main() {
    srand(time(0));
    cout <<"lets meet some alien\n";

    Alien Jackass;
    cout << "this creature has" << Jackass.limbCount << "limbs!\n";
    cout << "Hello im from" << Jackass.homePlanet << ".\n";
    cout << "My threat level is" << Jackass.threatLevel << ".\n";
    cout << "My ablity to fly is" <<Jackass.canFly <<".\n";
   
    Jackass.Contact();
    Jackass.Depart();

    cout << "\n Random Alien \n";

    // Create an alien using custom values
    Alien customAlien(6, "Yes", 2, "Mars");

    cout << "This creature has " << customAlien.limbCount << " limbs!\n";
    cout << "Can it fly? " << customAlien.canFly << "\n";
    cout << "Threat level: " << customAlien.threatLevel << "\n";
    cout << "Home planet: " << customAlien.homePlanet << "\n\n";

    customAlien.Contact();
    customAlien.Depart();

    return 0;
}









