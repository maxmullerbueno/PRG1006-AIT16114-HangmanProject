#include "ConsoleDisplay.h"                                       // ConsoleDisplay header
#include "Country.h"                                              // Country header
#include "Player.h"                                               // Player header
using namespace std;

#include <iostream>                                               // Input and output

ConsoleDisplay::ConsoleDisplay(Country* country, Player* player)  // Constructor: links the pointers to real objects
{
    this->country = country;
    this->player = player;
}

void ConsoleDisplay::showWelcome()                                // Displays welcome screen
{
    int option;
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
    cout << "    Select your choice:      " << endl;
    cin >> option;
}

void ConsoleDisplay::showInstructions()                            // Displays the instructions
{
    int ENTER;
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
    cin >> ENTER;
}

void ConsoleDisplay::showBoard()                                   // Displays the game board
{    

    cout << "--------------------------------" << endl;
    cout << "            HANGMAN             " << endl;
    cout << "--------------------------------" << endl;

    //ConsoleDisplay::drawHangman();

    cout << "--------------------------------" << endl;
    cout << "Word: " << country->getDisplayWord() << endl;                     
    cout << "Attempts: " << endl;
    for (int i = 0; i < player->getAttemptsRemaining(); i++)                     
    {
    cout << "[*]";
    }
    cout << endl;

    cout << "Guessed: ";
    for (char letter : player->getGuessedLetters()) {
    cout << letter;
    }
    cout << endl;                  
    cout << "--------------------------------" << endl;
}

void ConsoleDisplay::showResult()                                  // Displays the result
{
        if (country->isComplete() ) {
        cout << endl;
        cout << "-------------------------------" << endl;
        cout << "            HANGMAN            " << endl;
        cout << "-------------------------------" << endl;
        cout << "           *YOU WON*           " << endl;
        cout << endl;
        cout << "Country: " << country->getDisplayWord() << endl;
        cout << "Attempts remaining: " << player->getAttemptsRemaining() << endl;
        cout << " Performance: ";
        for (int i = 0; i < stars; i++) {
            cout << "*" << "^_^" << endl;
        }

        cout << "-------------------------------" << endl;
        cout <<   "[Y] Play Again"  "[N] Exit"    << endl;
        cout << "-------------------------------" << endl;
    }

    else {
        cout << "-------------------------------" << endl;
        cout << "            HANGMAN            " << endl;
        cout << "-------------------------------" << endl;
        cout << "           GAME OVER!          " << endl;

        //ConsoleDisplay::drawHangman();

        cout << "    Country:  " << country->getSelectedCountry() << endl;
        cout << "    Better luck next time!     " << endl;
        cout << "-------------------------------" << endl;
        cout <<   "[Y] Play Again"  "[N] Exit"    << endl;
        cout << "-------------------------------" << endl;
     }
}

