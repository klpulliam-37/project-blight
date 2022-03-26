#include "Globals.h"

int main() {
    string input;

    cout << "Hello, please type in some input so I can parse it...\n";
    getline(cin, input);

    vector<string> parsedString = Globals::Parse(input);
    for(int i = 0; i < parsedString.size(); i++) {
        cout << parsedString[i] << '\n';
    }

    return 0;
}

// PSUEDO CODE

// Need to figure out how to take in input, and parse it into three variables:
// PRSA = The action of the string, PRSO = The direct object of the string, 
// PRSI = The indirect object of the string(this parameter is optional).

// C:\Users\Kolten\Documents\Programming\C++ Games\project-blight\main.cpp