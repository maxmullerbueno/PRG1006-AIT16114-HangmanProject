#pragma once                               // Prevents multiple inclusion of this header file

class Game                                 // Base class for the game
{
public: 
virtual void play() = 0;                   // Starts the game abstract base class
virtual void reset() = 0;                  // Resets the game abstract base class
void exit();                               // Exits the game 
};