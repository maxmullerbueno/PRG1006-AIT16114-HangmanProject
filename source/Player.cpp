#include "Player.h"                                                // Player header
using namespace std;                                               // To avoid std::
#include <cctype>                                                  // for tolower()

// Implementation of the Player class methods
void Player::addGuess(string guess)
{
    guessedLetters.insert(tolower(guess[0]));
}

// Checks if player has already guessed a letter
bool Player::hasGuessed(string guess)
{
    return guessedLetters.count(tolower(guess[0])) > 0;
}

// Reduces number of attempts remaining by 1
void Player::loseAttempt()
{
    attemptsRemaining = attemptsRemaining - 1;
}


// Returns number of attempts remaining
int Player::getAttemptsRemaining()
{
    return attemptsRemaining;
}

// Returns letters guessed by player
set<char> Player::getGuessedLetters() {
    return guessedLetters;
}

// Constructor implementation of number attempts remaining
Player::Player(){                                    
    attemptsRemaining = 6;    
    guessedLetters.clear();                  
}