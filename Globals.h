#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

namespace Globals {
    // Need to figure out how to define in .cpp file without getting the
    // LNK2019 error(Compiler thinks it exists but not definition can be found)
    vector<string> Parse(string& input);
}