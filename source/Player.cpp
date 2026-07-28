#include <iostream>
#include "Player.h"

void Player::addGuess(char guess)
{
    guessedLetters.insert(guess);
}

