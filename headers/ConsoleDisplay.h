#pragma once                                        // Prevents multiple inclusion of this header file

class ConsoleDisplay                                // Handles all console output for the game
{
private:
Country* country;                                   // Pointer to the selected country
Player* player;                                     // Pointer to the player

public:
ConsoleDisplay(Country* country, Player* player)   // Constructor: links the pointers to real objects
{
    this->country = country;                        // Links the country pointer to the actual Country object
    this->player = player;                          // Links the player pointer to the actual Player object
}

void showWelcome();                                 // Displays welmcome message
void showInstructions();                            // Displays game instructions
void showBoard();                                   // Displays game board
void showResult();                                  // Display game result
void drawHangman();                                 // Draws the Hangman figure
};
