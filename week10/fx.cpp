// Mel Sampson coding 1 fall 2026 
// functions

#include <iostream>
#include <string>
#include <vector>  // the easy way to use array.
using namespace std;

//declaring and defining a function
void SayHello(){
    cout << "hello.\n";
}

// declaring and defining a function 
// this time with input parammeters
 void Say( string something) {
 cout << something << endl; //end line
 }

 void CoolSay(string something) {
   for(int i = 0; i < something.size(); i++) {
    cout << something[i] << " ";
   }
    cout << endl; // end line
 }
 // declaring and finding functions
 //this one has two inputs
 int Add(int numA, int numB){
    return numA + numB;
 }
float Add(float numA, float numB) {
    return numA + numB;
}

bool AskYN(string question = "Keep playing?"){
   

    string input;
    while (true) {
        cout << question << " (y/n)\n";
        getline(cin, input);

        if (input == "y"){
            return true;
        }
        else if(input == "n") {
            return false;
        }
        else {
            cout << "invaild input. Please type 'y' or 'n'.\n";
        }
    }
}

//dice roll 
//display vector of names
  //input parameter = array
  //return nothing = void
  //display all names with a loop

  void DisplayVector(vector<string> vec){
 //   cout << "the first element in vec is " << vec[0] << ".\n";

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n.";
    }
  }


  //build a function that triples a number
int Triple(int input){
    return input*3;
 }
  
int main() {
  cout << "finally, functions!!\n";
  cout << "5 tripled is" << Triple(5) << endl;

  // calling the function;
    SayHello();
    Say("Whats up buddy");
    Say("Not Much, You?");
    CoolSay("i'm just breathing");
   
   cout << "2 + 5 =" << Add(2, 5) << endl;
   cout << "345 + -344 =" << Add(345, -344) << endl;
   cout << " 5 * 3 =" << Triple(5) << endl;
  

   if(AskYN()) {
       cout << "lets start another round of the game!\n";
    
   }
   else {
    cout << "Thanks for playing\n";

   }
   if(AskYN("Do you like green eggs and ham?")){
    cout << "thats weird! You are wierd\n";
   }
   else {
    cout << "yeah i dont either.\n";
   }

   //kids dont go try this at home
   if(AskYN())     cout << "lets go to the nect level\n";
   else            cout << "thanks for playing\n";

   vector<string> names = {"finn", "jake", "melly", "jesus im lost"};
   DisplayVector(names);

    return 0;
}