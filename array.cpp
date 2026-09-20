//Melanie Sampson
// array.cpp

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "loops and lists!\n";

//craeting an array of favorite video games
//variable type is 'string'. size is 5
    string favgames [5];  //this creates 5 empty string variables

    //assign a value to the first game in array
    favgames[0] = "Marvel Rivals";

     cout << "my top fav game is " << ".\n";

     cout << "Please add another game to the list. \n";
     string input;
     getline(cin, input);
     // add the input to the array
     favgames[1] = input;

     cout << "The second fav game is " << favgames[1] << ".\n";

     // a for loop has 3 useful variables attached to it.
     //for (setup, test, increment) { code }
  
     cout << "here are all of the fav games:\n";


      for(int i = 0; i < 5; i++) {
        if(favgames[i] == ""){
                 continue;  //go to the end of the loop       
        }
          cout << favgames [i] << "\n";

      }

   //nuild an array of friends
   string friends[] = {"mani", "shawn" , "sam" , "cameron",};
   //cout << "First friend is " << friends[0] << ".\n";

   //show friends list to user
   for(int i = 0; i < 6; i++) {
       cout << friends[i] << "\n";
   }

   //ask the friend to pick a friend to remove
   cout << "which friend should we remove from the gang =?\n";
   getline(cin, input);

   //remove the friend
  for(int i = 0; i < 6; i++){
    if(input == friends[i]) {
    friends[i] = "----";
}

  }
  
   //show the new friends list

   cout << "here is the new gang!\n";
   for(int i = 0; i < 6; i++){
       cout << friends[i] << "\n";
}



// create a array of scores
// ask the user to input scores until the array is full or until there done 
//Then display the scores

  const int SIZE = 10;

   int scores[SIZE];
   for(int i = 0; SIZE; i++){
       cout << "please add a score: ";
       getline(cin , input);

       if(input == "done"){
        scores[i] = -1;
        break;
       }
       scores[i] = stoi(input);  //stoi = convertsstring to int
   }

   for(int i =0; i < SIZE; i++){
    if(scores[i] == -1){
        continue;
    }
    cout << scores[i] << "\n";
   }
    return 0;
}
