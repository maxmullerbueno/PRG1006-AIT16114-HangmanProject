#pragma once                               // Prevents multiple inclusion of this header file
#include <exception>                       // Provides the standard base class std::exception
#include <iostream>                        // Permits Inputs and Outputs
using namespace std;                       // To avoid std:: or string::

#include <string>                          // Provides the std::string class
#include <vector>                          // Provides list of countries
#include <set>                             // Provides the std:: set container

// Exception thrown when the countries list is empty, following the try/catch/throw class from Week 11
class NoCountriesAvailableException : 
public exception {   // 
    virtual const char* what() const throw() {
    return "Countries unavailable.";
    }
};

class Country                               
{
private:
      vector<string> countries;            // List of available countries
      string selectedCountry;              // Currently selected country
      set<char> discoveredLetters;         // Letters correcntly guessed by the player
public:
      Country();                           // Constructor declaration

      string selectRandomCountry();        // Selects a random country
      bool checkLetter(char);              // Checks if a guessed letters exists
      bool isComplete() const;                   // Checks if the whole word has been discovered. Added const as remains the program unchanged.
      string getDisplayWord() const;             // Returns the word to display to the player. Added const as remains the program unchanged.
      string getSelectedCountry() const;         // Returns the selected country. Added const as remains the program unchanged.
      bool guessEntireWord(string guess);  // Guesses the whole word and checks if it is correct. Necessary as it shows in the Use Case Diagram
};