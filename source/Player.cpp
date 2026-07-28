#include <iostream>
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