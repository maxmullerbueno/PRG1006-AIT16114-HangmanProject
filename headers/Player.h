#pragma once                               // Prevents multiple inclusion of this header file
using namespace std;                       // To avoid std::

#include <string>                          // Provides the std::string class
#include <set>                             // Provides the std:: set container

class Player                             
{
private:
      string name;                         // Stores the player's name
      int attemptsRemaining;               // Tracks the number of remaining attempts
      set<char> guessedLetters;            // Stores unique letters guessed by the player

public:
      Player();                            // Constructor declaration

      int addGuess(char guess);           // Adds guessed letter to the player's collection
      bool hasGuessed(char guess);         // Checks if the player has already guessed a letter
      int loseAttempt();                  // Decreases the number of remaining attempts
      int getAttemptsRemaining();          // Returns the number of attempts remaining
      set<char> getGuessedLetters();          // Returns the letters guessed by the player
};