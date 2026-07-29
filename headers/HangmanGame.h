#pragma once                               // Prevents multiple inclusion of this header file

class HangmanGame
{

private:
Player player;                             
Country country;                           
Display consoledisplay;                    

public:
void play();
void startGame();
void reset();

}