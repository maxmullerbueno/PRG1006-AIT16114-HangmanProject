#include <iostream>                                               // Includes Inputs and Outputs to the Library
using namespace std;

//Classes
#include "ConsoleDisplay.h"                                       // ConsoleDisplay header
#include "Country.h"                                              // Country header
#include "Game.h"                                                 // Game header
#include "HangmanGame.h"                                          // HangmanGame header
#include "Player.h"                                               // Player header

int main() {
    Country country;
    Player player;
    ConsoleDisplay display(&country, &player);                    // Links objects to the Country and Player pointers

    country.selectRandomCountry();                                // Selects a random country to proceed the game

    int choice = display.showWelcome();                           // Displays welcome message and return choice

    if (choice == 1) {                                            // Start the Game
        display.showBoard();                                      // Draws the Hangman figure
    }
       else if (choice == 2) {                                    // Display Instructions screen
            display.showInstructions();
    }
                else if (choice == 3) {                           // Exit the game
                cout << "See you next time. Goodbye!" << endl;
    }
    return 0;                                                     // Finishes the program 
}