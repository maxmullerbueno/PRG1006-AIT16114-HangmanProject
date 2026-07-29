#pragma once                               // Prevents multiple inclusion of this header file

#include "Country.h"                       // Country header
#include "Player.h"                        // Player header
#include "ConsoleDisplay.h"                // ConsoleDisplay header
#include "Game.h"                          // Game header

class HangmanGame
{
private:
Player player;                             // HangmanGame class
Country country;                           // Stores the player information
ConsoleDisplay display;                    // Stores the selected country      

public:
void play();                               // Runs the game
void startGame();                          // Starts the game
void reset();                              // Resets the game
}