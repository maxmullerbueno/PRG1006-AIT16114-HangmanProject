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
    ConsoleDisplay display(&country, &player);

    country.selectRandomCountry();                           // Selects a random country to proceed the game

    display.showWelcome();
    display.showInstructions();
    
    return 0;
}