#include "HangmanGame.h"                        // HangamanGame header
using namespace std;                            // To avoid std::

// Constructor implementation and initializer list
HangmanGame::HangmanGame() : player(), country(), display(&country, &player){
}

// Plays the Hangman game
void HangmanGame::play() 
{
    bool userOption = true;

    while (userOption)
    {
        
    int choice = display.showWelcome();
    
    // Switch statement for user's guidance
        switch (choice)
        {
            // Start Game
            case 1:
            {
            country.selectRandomCountry();
            display.showBoard();
            break;
            }

            // Instructions screen
            case 2:
            {
            display.showInstructions();
            break;
            }
            
            // Exit game
            case 3:
            {
            cout << " ^_^ Hope to see you soon again! ^_^ " << endl;
            userOption = false;
            break;
            }
        }
    }
}