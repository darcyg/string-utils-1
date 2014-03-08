//  string-utils.hpp
//  A string manipulation library for C++
//  Author: Adam Harbin

#include <vector>
#include <string>

using std::vector;
using std::string;

namespace strutl {
    vector<string> split(string strToSplit, string separator = "");
}