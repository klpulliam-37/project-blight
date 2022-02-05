#include "Globals.h"
using namespace Globals;

// Need to figure out how to define in .cpp file without getting the
// LNK2019 error(Compiler thinks it exists but not definition can be found)
vector<string> Globals::Parse(string& input) {
    vector<string> words;
    size_t pos = 0;
    string word;

    if(!input.empty()) {
        while((pos = input.find(" ")) != string::npos) {
            word = input.substr(0, pos);
            words.push_back(word);
            input.erase(0, pos + 1);
        }

        if(!input.empty()) {
            words.push_back(input);
        }
    }

    return words;
}