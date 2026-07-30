#include "ConsoleDisplay.h"          // ConsoleDisplay header
using namespace std;

#include <iostream>                  // Input and output

// Displays the welcome screen
void ConsoleDisplay::showWelcome()
{
    cout << endl;
    cout << "     HANGMAN COUNTRIES       " << endl;
    cout << "      GUESS THE WORLD!       " << endl;
    cout << "-----------------------------" << endl;
    cout << endl;
    cout << "[1] Start Game               " << endl;
    cout << "[2] Instructions             " << endl;
    cout << "[1] Exit Game                " << endl;
    cout << endl;
    cout << "-----------------------------" << endl;
    cin >> endl "Select your choice:      " << endl;
}

// Displays the instructions
void ConsoleDisplay::showInstructions()
{
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
}

// Displays the game board
void ConsoleDisplay::showBoard(string word, int attempts, string guessed)                 // String to determine word
{
    cout << "--------------------------------" << endl;
    cout << "            HANGMAN             " << endl;
    cout << "--------------------------------" << endl;

    drawHangman();

    cout << "--------------------------------" << endl;
    cout << "Word: " << word << endl;                      // word determined at line 40
    cout << "Attempts: " << endl;
    for (int i = 0; i < attempts; i++)                     // Loop for attemps, int determined at line 40
    {
        cout << "[*]";
    }
    cout << endl;

    cout << "Guessed: " guessed << endl;                   // guessed determined by string at line 40
    cout << endl;
    cout << "--------------------------------" << endl;
}

// Displays the result
void ConsoleDisplay::showResult(bool win, std::string country,
                                int attemptsRemaining, int stars)
{
    cout << endl;

    if (win)
    {
        cout << "-------------------------------" << endl;
        cout << "            HANGMAN            " << endl;
        cout << "-------------------------------" << endl;
        cout << "           *YOU WON*           " << endl;
        cout << endl;
        cout << "Country: " << country << endl;
        cout << "Attempts remaining: " << attemptsRemaining << endl;

        cout << " Performance: ";
        for (int i = 0; i < stars; i++)
        {
            cout << "*";
        }
        cout << "  ^_^" << endl;

        cout << "-------------------------------" << endl;
        cout <<   "[Y] Play Again"  "[N] Exit"    << endl;
        cout << "-------------------------------" << endl;
    }
}
        else
        {
        cout << "-------------------------------" << endl;
        cout << "            HANGMAN            " << endl;
        cout << "-------------------------------" << endl;
        cout << "           GAME OVER!          " << endl;

        drawHangman()

        cout << "    Country:  " << country       << endl;
        cout << "    Better luck next time!     " << endl;
        cout << "-------------------------------" << endl;
        cout <<   "[Y] Play Again"  "[N] Exit"    << endl;
        cout << "-------------------------------" << endl;
        }