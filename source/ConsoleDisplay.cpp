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