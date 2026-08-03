#include "ConsoleDisplay.h"                                             // ConsoleDisplay header
#include "Country.h"                                                    // Country header
#include "Player.h"                                                     // Player header
using namespace std;

#include <limits>                                                       // Provides numeric limits for data types
#include <iostream>                                                     // Input and output
#include <string>                                                       // Provides the std::string class

// Constructor: links the pointers to real objects
ConsoleDisplay::ConsoleDisplay(Country* country, Player* player) {
    this->country = country;
    this->player = player;
}

// Displays welcome screen
int ConsoleDisplay::showWelcome() {
    cout << endl;
    cout << "     HANGMAN COUNTRIES       " << endl;
    cout << "      GUESS THE WORLD!       " << endl;
    cout << "-----------------------------" << endl;
    cout << endl;
    cout << "[1] Start Game               " << endl;
    cout << "[2] Instructions             " << endl;
    cout << "[3] Exit Game                " << endl;
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "    Select your choice:      ";

    // Display choices for the player at the welcome screen
    int choice;

    // Player inputs his choice
    cin >> choice;

    // Condition to check if the input is valid
    if (cin.fail()){

    // Clean errors and ignore invalid input    
    cin.clear();

    // Discard invalid input from the input buffer
    cin.ignore(1000,'\n');

    // Display error message for invalid input
    cout << "Sorry, choice is invalid :-(, please try again." << endl;

    }  
    // Input validation for player's choice
    return choice;
} 

    // Displays the instructions screen
    void ConsoleDisplay::showInstructions() {
    cout << "--------------------------------" << endl;
    cout << "          HOW TO PLAY           " << endl;
    cout << "--------------------------------" << endl;
    cout << "> Guess the hidden country name " << endl;
    cout << "> Enter one letter at a time    " << endl;
    cout << "  or type the whole word        " << endl;
    cout << "> You have 6 attempts           " << endl;
    cout << "> Repeated guesses don't count  " << endl;
    cout << "> Invalid input will be rejected" << endl;
    cout << endl;
    cout << "--------------------------------" << endl;
    cout << "   Press ENTER to go back...    " << endl;

    // Clear previous input buffer to avoid any issues
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  
 
    // Wait player to press ENTER
    cin.get();  
    
}

// Displays the game board
    void ConsoleDisplay::showBoard() {    
    cout << "--------------------------------" << endl;
    cout << "            HANGMAN             " << endl;
    cout << "--------------------------------" << endl;

    ConsoleDisplay::drawHangman();

    cout << "--------------------------------" << endl;
    cout << "Word: " << country->getDisplayWord() << endl;                     
    cout << "Attempts: ";

    // For Loop to display number of attempts remaining as [*] for the player
    for (int i = 0; i < player->getAttemptsRemaining(); i++) {
    cout << "[*]";
    }
    cout << endl;
    cout << "Guessed: ";

    // For Loop to display the letters guessed by the player
    for (char letter : player->getGuessedLetters()) {
    cout << letter;
    }
    cout << endl;                  
    cout << "--------------------------------" << endl;
}

// Displays the screen result
void ConsoleDisplay::showResult() {  
    
        // Condition in case of player winning the game
        if (country->isComplete() ) {
        cout << endl;
        cout << "-------------------------------" << endl;
        cout << "            HANGMAN            " << endl;
        cout << "-------------------------------" << endl;
        cout << "           *YOU WON*           " << endl;
        cout << endl;
        cout << "Country: " << country->getDisplayWord() << endl;
        cout << "Attempts remaining: " << player->getAttemptsRemaining() << endl;
        
        // Show performance screen according to the number of attempts remaining
        cout << " Performance: ";

        // Condition to display performance of the attempts remaining
        if (player->getAttemptsRemaining() >= 5) {
            cout << "***** " << "^_^" << endl;
        }
            else if (player->getAttemptsRemaining() >= 3) {
                cout << "*** " << ":-)" << endl;
            }
                    else {
                        cout << "* " << ":-(" << endl;
                    }

        cout << "-------------------------------" << endl;
        cout <<   "[Y] Play Again" << " " << "[N] Exit" << endl;
        cout << "-------------------------------" << endl;
        }

        // Condition in case of game over
        else {
        cout << "-------------------------------" << endl;
        cout << "            HANGMAN            " << endl;
        cout << "-------------------------------" << endl;
        cout << "           GAME OVER!          " << endl;

        ConsoleDisplay::drawHangman();

        cout << "    Country:  " << country->getSelectedCountry() << endl;
        cout << "    Better luck next time!     " << endl;

        // Prompt for player choosing to play again or exit the game
        char playAgain;
        cout << "-------------------------------" << endl;
        cout <<   "[Y] Play Again" << " " << "[N] Exit" << endl;
        cout << "-------------------------------" << endl;
        cin >> playAgain;

        // Condition to check if the player wants to play again or exit the game
        if (playAgain == 'Y' || playAgain == 'y') {
            cout << "Starting a new game..." << endl;
            cout << endl;
            cout << endl;
        }

        // Condition to check if the player wants to exit the game
        else if (playAgain == 'N' || playAgain == 'n') {
            cout << "Thank you for playing!" << endl;
            cout << "See you next time! ^_^" << endl;
            cout << endl;
            cout << endl;
        }

        // Condition to handle invalid input for play again or exit
        else {
            cout << "Sorry, input is invalid, please try again." << endl;
            cout << endl;
            cout << endl;
        }
    }
}

        // function to progressively draw the hangman
        void ConsoleDisplay::drawHangman() {

        // Get the number of attempts remaining from the player
        int loseAttempt = player->getAttemptsRemaining();

        // drawHangman body based on the number of attempts remaining
        if (loseAttempt == 6) {
            cout << "            +_____+" << endl;
            cout << "            |     |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "        =================  " << endl;
        }

        else if (loseAttempt == 5) {
            cout << "            +_____+" << endl;
            cout << "            |     |" << endl;
            cout << "            O     |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "        =================  " << endl;
        }

        else if (loseAttempt == 4) {
            cout << "            +_____+" << endl;
            cout << "            |     |" << endl;
            cout << "            O     |" << endl;
            cout << "            |     |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "        =================  " << endl;
        }

        else if (loseAttempt == 3) {
            cout << "            +_____+" << endl;
            cout << "            |     |" << endl;
            cout << "            O     |" << endl;
            cout << "            |     |" << endl;
            cout << "           /      |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "        =================  " << endl;
        }

        else if (loseAttempt == 2) {
            cout << "            +_____+" << endl;
            cout << "            |     |" << endl;
            cout << "            O     |" << endl;
            cout << "            |     |" << endl;
            cout << "           / \\   |" << endl;
            cout << "                  |" << endl;
            cout << "                  |" << endl;
            cout << "        =================  " << endl;
        }

        else if (loseAttempt == 1) {
            cout << "            +_____+" << endl;
            cout << "            |     |" << endl;
            cout << "            O     |" << endl;
            cout << "            |     |" << endl;
            cout << "           / \\   |" << endl;
            cout << "           /      |" << endl;
            cout << "                  |" << endl;
            cout << "        =================  " << endl;
        }

        else if (loseAttempt == 0) {
            cout << "            +_____+" << endl;
            cout << "            |     |" << endl;
            cout << "            O     |" << endl;
            cout << "             |    |" << endl;
            cout << "            / \\  |" << endl;
            cout << "            / \\  |" << endl;
            cout << "                  |" << endl;
            cout << "        =================  " << endl;
        }
    }
