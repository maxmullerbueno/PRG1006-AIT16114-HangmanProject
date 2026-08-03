#include "ConsoleDisplay.h"                                       // ConsoleDisplay header
#include "Country.h"                                              // Country header
#include "Player.h"                                               // Player header
using namespace std;

#include <limits>                                                 // Provides numeric limits for data types
#include <iostream>                                               // Input and output
#include <string>                                                 // Provides the std::string class

ConsoleDisplay::ConsoleDisplay(Country* country, Player* player)  // Constructor: links the pointers to real objects
{
    this->country = country;
    this->player = player;
}

int ConsoleDisplay::showWelcome()                                // Displays welcome screen
{
    // Cleaning the console screen
    system("cls");

    int choice;
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
    
    cin.clear();
    cin >> choice;
    return choice;
}

 // Displays the instructions
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

    string temp;


}

void ConsoleDisplay::showBoard()                                   // Displays the game board
{    

    cout << "--------------------------------" << endl;
    cout << "            HANGMAN             " << endl;
    cout << "--------------------------------" << endl;

    //ConsoleDisplay::drawHangman();

    cout << "--------------------------------" << endl;
    cout << "Word: " << country->getDisplayWord() << endl;                     
    cout << "Attempts: ";
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
        
        // Show performance screen according to the number of attempts remaining
        cout << " Performance: ";
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

