#pragma once
#include <string>
#include <set>

class Player
{
private:
      std::string name;
      int attemptsRemaining;
      std::set<char> guessedLetters;

public:
      void addGuess(char guess);
}