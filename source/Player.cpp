#include "Player.h"

void Player::addGuess(char guess)
{
    guessedLetters.insert(guess);
}

bool Player::hasGuessed(char guess)
{
    return guessedLetters.count(guess) > 0;
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