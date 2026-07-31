#include "HangmanGame.h"                        // HangamanGame header
using namespace std;                            // To avoid std::

// Constructor implementation and initializer list
HangmanGame::HangmanGame() : player(), country(), display(&country, &player){
}

// Plays the Hangman game
void HangmanGame::play() {
    int choice = display.showWelcome();
}