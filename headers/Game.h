#pragma once                               // Prevents multiple inclusion of this header file

class Game                                 // Base class for the game
{
public: 
int play();                               // Starts the game
int reset();                              // Resets the game
int exit();                               // Exits the game
};