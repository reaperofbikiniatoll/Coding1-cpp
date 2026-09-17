// mel sampson coding 1 
// adventure 1.0 

// setup (extra tools and textboxes)
#include <iostream>
#include <string>
#include <cstdlib>  // for rand
#include <ctime>   // for rand
using namespace std;

// start of the new program
int main() {

     // seed the random generator
     srand(time(0));

    cout << "Let's go adventuring!\n";

    cout << "Here is a random Number:";
    cout << rand();
    cout << "\n";

    cout << "Here are ten random numbers:\n";
    int counter = 0;
    while(counter < 10) {
        cout << rand() % 10 + 1 << "\n";
        counter++;

    }


//pseudocode
//pick a number between 1 and 10 and store it
int theNumber; //creating a variable to store the number
theNumber = rand() % 10 + 1;   //assigning a value between 1 and 10 
int input; 


cout << "I'm thinking of a number between 1 and 10, can you guess it?\n";
cout << "[debugging: the number is" << theNumber << "]\n";
//they answer, we store that in an (int) input variable
do; {

    cin >> input;

    // check to see if their guess is correct
    if (input == theNumber){
        //is input == theNumber
        //they win! stop asking!
        cout << "you win\n";
    }
    else{
        //if false
        if (input > theNumber){

            cout << "your guess is too high\n";
        }
    else {

        cout << "your guess is to low\n";
        }
    }
}while(input != theNumber); 




    return 0;

}