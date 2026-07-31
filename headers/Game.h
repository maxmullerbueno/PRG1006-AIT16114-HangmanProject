#pragma once                               // Prevents multiple inclusion of this header file

class Game                                 // Base class for the game
{
public: 
virtual void play() = 0;                               // Starts the game
virtual void reset() = 0;                              // Resets the game
virtual void exit() = 0;                               // Exits the game
};