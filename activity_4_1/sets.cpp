#include <iostream> 
#include <array> // includes the array library
#include <algorithm>
#include <iterator>
#include <string>// to use strings
#include <cstdio> // includes library with print f

int main () {
  
    std::array<char, 8> squid = {'h','i',' ','t','h','e','r','e'};

    std::printf("%c\n", squid.at(1));

    std::array<std::string, 2> squid_str = {"hi", "there"};

    std::printf("%s\n", squid_str.at(0).c_str());

    std::array<int,5> fives = {1,2,3,4,5};

    std::printf("%i\n,", fives.at(1));
    return 0;
}