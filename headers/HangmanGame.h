#pragma once                               // Prevents multiple inclusion of this header file

class HangmanGame
{
private:
Player player;                             // HangmanGame class
Country country;                           // Stores the player information
ConsoleDisplay ConsoleDisplay;             // Stores the selected country      
 
public:
void play();                               // Runs the game
void startGame();                          // Starts the game
void reset();                              // Resets the game
}