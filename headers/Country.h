#pragma once                               // Prevents multiple inclusion of this header file
#include <iostream>                        // Permits Inputs and Outputs
using namespace std;                       // To avoid std:: or string::

#include <string>                          // Provides the std::string class
#include <vector>                          // Provides list of countries
#include <set>                             // Provides the std:: set container

class Country                               
{
private:
      vector<string> countries;            // List of available countries
      string selectedCountry;              // Currently selected country
      set<char> discoveredLetters;         // Letters correcntly guessed by the player
public:
      string selectRandomCountry();        // Selects a random country
      bool checkLetter(char);              // Checks if a guessed letters exists
      bool isComplete();                   // Checks if the whole word has been discovered
      string getDisplayWord();             // Returns the word to display to the player
      string getSelectedCountry();         // Returns the selected country
};