#pragma once                               // Prevents multiple inclusion of this header file

#include <string>                          // Provides the std::string class
#include <vector>
#include <set>                             // Provides the std:: set container

class Country                               
{
private:
      std::vector::std::string countries;
      std::string selectedCountry;
      std::set<char> discoveredLetters;
public:
      std::string selectRandomCountry();
      bool::checkLetter(char);
      bool::isComplete();
      string::getDisplayWord();
}