#include <iostream>                                          // Includes Inputs and Outputs to the Library
using namespace std;

#include "ConsoleDisplay.h"                                  // ConsoleDisplay header
#include "Country.h"                                         // Country header
#include "Game.h"                                            // Game header
#include "HangmanGame.h"                                     // HangmanGame header
#include "Player"                                            // Player header

int main()
{
    Country country;
    Player player;
    ConsoleDisplay display;

    display.showWelcome();
    display.showInstructions();

    display.showBoard(
        country.getDisplayWord(),
        player.getAttemptsRemaining(),
    );

    display.showResult(
        true,
        country.getCountryName(),
        player.getAttemptsRemaining()
    );

    return 0;
}