#include "ConsoleDisplay.h"          // ConsoleDisplay header

#include <iostream>                  // Input and output

// Displays the welcome screen
void ConsoleDisplay::showWelcome()
{
    std::cout << std::endl;
    std::cout << "     HANGMAN COUNTRIES       " << std::endl;
    std::cout << "      GUESS THE WORLD!       " << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << std::endl;
    std::cout << "[1] Start Game" << std::endl;
    std::cout << "[2] Instructions" << std::endl;
    std::cout << "[1] Exit Game" << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cin << std::endl "Select your choice: " << std::endl;
}

// Displays the instructions
void ConsoleDisplay::showInstructions()
{
    std::cout << "--------------------------------" << std::endl;
    std::cout << "           HOW TO PLAY          " << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "> Guess the hidden country name " << std::endl;
    std::cout << "> Enter one letter at a time    " << std::endl;
    std::cout << "  or type the whole word        " << std::endl;
    std::cout << "> You have 6 attempts           " << std::endl;
    std::cout << "> Repeated guesses don't count  " << std::endl;
    std::cout << "> Invalid input will be rejected" << std::endl;
    std::cout << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "   Press ENTER to go back...    " << std::endl;
}