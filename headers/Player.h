#pragma once                                              // Prevents multiple inclusion of this header file
using namespace std;                                      // To avoid std::

#include <string>                                         // Provides the std::string class
#include <set>                                            // Provides the std:: set container

class Player                             
{
private:
      string name;                                        // Stores the player's name
      int attemptsRemaining;                              // Tracks the number of remaining attempts
      set<char> guessedLetters;                           // Stores unique letters guessed by the player

public:
      Player();                                           // Constructor declaration

      void addGuess(string guess);                        // Adds guessed letter to the player's collection
      bool hasGuessed(const string& guess) const;         // Checks if the player has already guessed a letter. Added const as remains the program unchanged.
      void loseAttempt();                                 // Decreases the number of remaining attempts
      int getAttemptsRemaining() const;                   // Returns the number of attempts remaining. Added const as remains the program unchanged.
      const set<char> getGuessedLetters() const;                // Returns the letters guessed by the player. Added const as remains the program unchanged.
};