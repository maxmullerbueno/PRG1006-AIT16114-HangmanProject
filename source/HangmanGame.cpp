#include "HangmanGame.h"                        // HangamanGame header
using namespace std;                            // To avoid std::

// Constructor implementation and initializer list
HangmanGame::HangmanGame() : player(), country(), display(&country, &player){
}

// Plays the Hangman game
void HangmanGame::play() {
    // Starts game and handles user input for game options
    bool userOption = true;

    // Looping for the game
    while (userOption) {
        
    // Display welcome screen and get choices for the user  
    int choice = display.showWelcome();
    
    // Switch statement for user's guidance
        switch (choice)
        {
            // Start Game
            case 1:
            {
            startGame();
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
void HangmanGame::startGame()
{
    // Select a random country to start new game
    country.selectRandomCountry();
    
    // Keep the game running until the player wins or loses
    bool play = true;

    // Looping for the game
    while (play){
        // Display the current state of the game
        display.showBoard();

        // Reading for player guessed letter
        char guess;

        // Input a letter for player to guess
        cout << "Enter a letter: ";
        cin >> guess;

        // Condition if player has already guessed this letter
        if (player.hasGuessed(guess)){
        cout << "You already guessed that letter." << endl;
        continue;
        }

        // Store the new guessed letter
        player.addGuess(guess);

        // Condition if guessed letter exists in the selected country
        bool correct = country.checkLetter(guess);

        // Reduce one attempt in case of incorrect guessed letter
        if (!correct){
        player.loseAttempt();
        }

        // Display showBoard updated
        display.showBoard();

        // Condition if player has guessed the whole country
        if (country.isComplete()) {
        display.showResult();
        play = false;
        }

        // Condition if the player has no attempts remaining
        else if (player.getAttemptsRemaining() == 0){
        display.showResult();
        play = false;
        }

        // Condition so if player has guessed the whole country or has no attempts remaining
        if (country.isComplete()) {
        display.showResult();
        play = false;
        }

        // Condition so if player has no attempts remaining
        else if (player.getAttemptsRemaining() == 0){
        {
        display.showResult();
        play = false;
        }
    }
}