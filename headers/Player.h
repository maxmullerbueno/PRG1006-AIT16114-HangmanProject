#pragma once                               // Prevents multiple inclusion of this header file

#include <string>                          // Provides the std::string class
#include <set>                             // Provides the std:: set container

class Player                               
{
private:
      std::string name;                    // Stores the player's name
      int attemptsRemaining;               // Tracks the number of remaining attempts
      std::set<char> guessedLetters;       // Stores unique letters guessed by the player

public:
      void addGuess(char guess);           // Adds guessed letter to the player's collection
      bool hasGuessed(char guess);         // Checks if the player has already guessed a letter
      void loseAttempt();                  // Decreases the number of remaining attempts
      int getAttemptsRemaining();          // Returns the number of attempts remaining
}