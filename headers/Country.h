#pragma once                               // Prevents multiple inclusion of this header file

#include <string>                          // Provides the std::string class
#include <vector>                          // Provides list of countries
#include <set>                             // Provides the std:: set container

class Country                               
{
private:
      std::vector::std::string countries;  // List of available countries
      std::string selectedCountry;         // Currently selected country
      std::set<char> discoveredLetters;    // Letters correcntly guessed by the player
public:
      std::string selectRandomCountry();   // Selects a random country
      bool::checkLetter(char);             // Checks if a guessed letters exists
      bool::isComplete();                  // Checks if the whole word has been discovered
      string::getDisplayWord();            // Returns the word to display to the player
}