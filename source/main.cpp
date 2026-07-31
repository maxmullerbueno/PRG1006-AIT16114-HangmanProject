#include <iostream>                                          // Includes Inputs and Outputs to the Library
using namespace std;

//Classes
#include "ConsoleDisplay.h"                                  // ConsoleDisplay header
#include "Country.h"                                         // Country header
#include "Game.h"                                            // Game header
#include "HangmanGame.h"                                     // HangmanGame header
#include "Player.h"                                          // Player header

int main() {
    Country country;
    Player player;
    ConsoleDisplay display(&country, &player);               // Links objects to the Country and Player pointers

    country.selectRandomCountry();                           // Selects a random country to proceed the game

    display.showWelcome();                                   // Displays welcome message
    display.showInstructions();                              // Displays game instructions
    display.showBoard();                                     // Displays game board
    display.showResult();                                    // Displays game result

    return 0;                                                // Finishes the program 
}