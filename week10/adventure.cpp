
 // Mel Sampson - Coding 1 Fall 2026
 // Adventure Game

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// int because these are intergers
int health = 10;
int totalGold = 0;

// Function declarations
int DieRoll(int max);
bool AskYN(string question);
void Encounter();
void Ending();

int main() {
    srand(time(0));

    cout << "Welcome to the adventure game!\n";
    cout << "You start with 10 health and 0 gold.\n\n";

    while (health > 0) {
        Encounter();

        if (health <= 0) {
            break;
        }

        cout << "\nHealth: " << health << endl;
        cout << "Gold: " << totalGold << endl;

        if (!AskYN("Do you want to continue your adventure?")) {
            break;
        }
    }

    Ending();

    return 0;
}

// Rolls a random number from 1 to max
int DieRoll(int max) {
    return rand() % max + 1;
}

// Asks the player a yes or no question bool is true or false
bool AskYN(string question) {
    string input;

    while (true) {
        cout << question << " (y/n)\n";
        getline(cin, input);

        if (input == "y" || input == "Y") {
            return true;
        }
        else if (input == "n" || input == "N") {
            return false;
        }
        else {
            cout << "Invalid input. Please type y or n.\n";
        }
    }
}

// Creates a random encounter
void Encounter() {
    int encounterRoll = DieRoll(4);

    cout << "\nYou continue down the adventure path...\n";

    if (encounterRoll == 1) {
        cout << "You find a bag of gold!\n";
        int goldFound = DieRoll(5);
        totalGold += goldFound;

        cout << "You found " << goldFound << " gold!\n";
    }
    else if (encounterRoll == 2) {
        cout << "You encounter a wild creature!\n";

        if (AskYN("Do you want to try to get past it?")) {
            int roll = DieRoll(6);

            if (roll >= 4) {
                cout << "You made it past safely!\n";
                totalGold += 2;
                cout << "You also found 2 gold!\n";
            }
            else {
                cout << "You got hurt trying to get past!\n";
                health -= 3;
            }
        }
        else {
            cout << "You take another path and avoid the creature.\n";
        }
    }
    else if (encounterRoll == 3) {
        cout << "You find a healing spring!\n";

        int healing = DieRoll(3);
        health += healing;

        if (health > 10) {
            health = 10;
        }

        cout << "You gained " << healing << " health!\n";
    }
    else {
        cout << "You discover an old treasure chest!\n";

        if (AskYN("Do you want to open the chest?")) {
            int roll = DieRoll(6);

            if (roll >= 3) {
                int goldFound = DieRoll(8);
                totalGold += goldFound;

                cout << "You opened it and found "
                     << goldFound << " gold!\n";
            }
            else {
                cout << "The chest was trapped!\n";
                health -= 2;
            }
        }
        else {
            cout << "You leave the chest alone.\n";
        }
    }
}

// tells the player the adventure is over 
void Ending() {
    cout << "\n adventure over \n";

    if (health <= 0) {
        cout << "You ran out of health!\n";
        cout << "Your adventure has ended.\n";
    }
    else if (totalGold >= 10) {
        cout << "You return home as a treasure hunter!\n";
        cout << "You collected plenty of gold!\n";
    }
    else {
        cout << "You safely return home from your adventure.\n";
        cout << "Maybe next time you will find more treasure!\n";
    }

    cout << "Final health: " << health << endl;
    cout << "Total gold collected: " << totalGold << endl;
    cout << "Thanks for playing!\n";
}

