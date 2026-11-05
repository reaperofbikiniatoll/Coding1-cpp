//mel sampson
// coding 1 - files and headers

// write to a file
// the read from a file

#include <fstream>     //outputt file stream, for writing to file
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//lets read from the file into the vector
vector<string> Read(string fileName = "file.txt") {
    //create a tempoary vector of strings
    vector<string> temp;


    //create our file
    ifstream file(fileName);

    string line;
    if(file.is_open()) {
        while(getline(file, line)) {
            //file >> line;
            temp.push_back(line);
        }

        file.close();
        return temp;
    }

    return temp;
}


// passing vector by cop because it is safer 
void Write(vector<string> vec, string fileName = "file.txt") {
    //create a file and open it
    ofstream file("names.txt");

    if(file.is_open()) {
        cout << "writing vec to file. \n";
        for(int i = 0; i < vec.size(); i++){
            file << vec[i] << endl;
        }
        file.close();

            return;
    }


    if(file.is_open()){
        cout << "lets write a name to file.\n";
        file << "buttercup"; // adding a line to the folder
        file.close(); //shows up in folder
        // this will overwrite whatever file there is 

    return;
    }
}

int main() {
    cout << "hello world\n";

    vector<string> names;

    names = Read("names.txt");

    if(names.size() == 0){

        names.push_back("GTA IV");
        names.push_back("Ocarina of Time");
        names.push_back("Elder Scrolls IV");

        cout << "Wrote names to new files.\n";
    } else {
        cout << "here are the names.\n";

        for(int i = 0; i < names.size(); i++) {
            cout << names[i] << endl;
     } 
    }


    cout << "what name would you like to add\n";
    string input;
    getline(cin, input);
    names.push_back(input);
    

    Write(names, "name.txt");

    cout << "FINISHED WRITING NAME TO FILE.\n";
    return 0;
}