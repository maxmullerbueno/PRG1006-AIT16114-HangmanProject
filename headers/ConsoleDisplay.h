#pragma once                               // Prevents multiple inclusion of this header file

class ConsoleDisplay                       // Handles all console output for the game
{
public:
void showWelcome();                        // Displays welmcome message
void showInstructions();                   // Displays game instructions
void showBoard();                          // Displays game board
void showResult();                         // Display game result
void drawHangman();                        // Draws the Hangman figure
}
