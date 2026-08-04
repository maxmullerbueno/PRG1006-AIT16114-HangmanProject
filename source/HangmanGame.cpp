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
        switch (choice)  {

            // Case 1 for starting game
            case 1: {
            startGame();
            break;
            }

            // Case 2 to display instructions screen
            case 2: {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << ">>> Instructions Screen" << endl;
            display.showInstructions();
            cout << ">>> Back to Welcome Screen" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            break;
            }
            
            // Case 3 for exiting game screen
            case 3: {
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "-------------------------------" << endl;
            cout << endl;
            cout << "            HANGMAN            " << endl;
            cout << endl;
            cout << "-------------------------------" << endl;
            cout << endl;
            cout << " ^_^ Hope to see you soon! ;-) " << endl;
            cout << endl;
            cout << "-------------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            userOption = false;
            break;                         
            }
            
        }
    }
}

void HangmanGame::startGame() {

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
    }

    // Prompt for player choosing to play again or exit the game
        char playAgain;
        cin >> playAgain;

        // Condition to check if the player wants to play again or exit the game
        if (playAgain == 'Y' || playAgain == 'y') {
            void reset();
            cout << "Starting a new game..." << endl;
            void startGame();
            cout << endl;
            cout << endl;
        }

        // Condition to check if the player wants to exit the game
        else if (playAgain == 'N' || playAgain == 'n') {
            cout << "Thank you for playing!" << endl;
            cout << "See you next time! ^_^" << endl;
            switch (3);
            cout << endl;
            cout << endl;
        }

        // Condition to handle invalid input for play again or exit
        else {
            cout << "Sorry, input is invalid, please try again." << endl;
            cout << endl;
            cout << endl;
        }
}

// Resets game to the beginning
void HangmanGame::reset(){
    player = Player();
    country = Country();
}