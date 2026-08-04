#include "Player.h"

void Player::addGuess(string guess)
{
    guessedLetters.insert(guess[0]);
}

bool Player::hasGuessed(string guess)
{
    return guessedLetters.count(guess[0]) > 0;
}

void Player::loseAttempt()
{
    attemptsRemaining = attemptsRemaining - 1;
}

int Player::getAttemptsRemaining()
{
    return attemptsRemaining;
}
set<char> Player::getGuessedLetters() {
    return guessedLetters;
}
Player::Player(){                                              // Constructor implementation of number attempts remaining
    attemptsRemaining = 6;    
    guessedLetters.clear();                  
}