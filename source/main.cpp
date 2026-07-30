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
    ConsoleDisplay display;

    display.showWelcome();
    display.showInstructions();
    display.showBoard(); {
        country.getDisplayWord();
        player.getAttemptsRemaining();
}

    display.showResult(); {
        true;
        country.getSelectedCountry();
        player.getAttemptsRemaining();
    }
    return 0;
}