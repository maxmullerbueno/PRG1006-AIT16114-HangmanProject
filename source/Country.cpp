#include "Country.h"                             // Country header
using namespace std;                             // To avoid std::

#include <cstdlib>                               // Necessary for rand() and srand()
#include <ctime>                                 // Necessary for time()   

// Constructor countries
Country::Country()
{
// Starts randomly based on current time
srand(time(0));
    
// Provide list of countries
countries = {"Australia", "Brazil", "Canada", "Cambodia", "France", "China", "Indonesia", "Colombia", 
    "Chile", "Bahamas", "Mexico", "Germany", "Portugal", "Spain", "Uruguay", "Paraguay", "Korea", "Japan", 
    "Russia", "Greece", "Turkey", "Thailand", "Philippines", "Panama", "England", "Chad", "Ethiopia", 
    "Egypt", "Morroco", "Italy", "Qatar", "Venezuela"
};
}

// Pick it up one country of the list
string Country::selectRandomCountry() {
    
    // Provides a random index based of the countries vector size
    int index = rand() % countries.size();
    selectedCountry = countries[index];
    discoveredLetters.clear();

    // Return the selected country
    return selectedCountry;
}

// Checks if the guessed letter really exists
bool Country::checkLetter(char letter) {
    bool found = false;
    char lowerLetter = tolower(letter);

    // Reads each character in the repository
    for (char c : selectedCountry) {
        // 
        if (tolower(c) == lowerLetter) {
            discoveredLetters.insert(lowerLetter);
            found = true;
        }
    }
    // Return if letter was found or not
    return found;
}

// Verify the whole word if discovered
bool Country::isComplete() {
    // If any letter 'c' is missing out from set, isn't complete
    for (char c : selectedCountry) {
        if (discoveredLetters.count(tolower(c)) == 0) {
            return false; 
        }
    }
    // If all letters are found, the word is complete
    return true; 
}

// Returns hidden word
string Country::getDisplayWord() {
    // Initialization of displayWord as empty string
    string displayWord = "";

    // Checks if it has been discovered for each country
    for (char c : selectedCountry) {
        // If the letter 'c' was found, add it. Otherwise, add underscore.
        if (discoveredLetters.count(tolower(c)) > 0) {
            displayWord += c;
        } 
        // Add underscore if letler "c" was not found
        else {
            displayWord += '_';
        }
        // Add an extra space after each letter
        displayWord += ' '; 
    }
    // Return the display
    return displayWord;
} 

// Returns the selected country
string Country::getSelectedCountry() {
    return selectedCountry;
}

// Guesses the whole word and checks if it is correct
bool Country::guessEntireWord(string guess) {
    // Normalize the guessed word to lowercase
    string lowerGuess = "";
    // Loop for each character in the guessed word and change it to lowercase
    for (char c : guess) {
        lowerGuess += tolower(c);
    }

    // Normalize selectedCountry to lowercase (same logic as above)
    string lowerCountry = "";
    // Loop for each character in the guessed word and change it to lowercase (Same logic as above)
    for (char c : selectedCountry) {
        lowerCountry += tolower(c);
    }

    // Compare the normalized guessed word to normalized selected country
    if (lowerGuess == lowerCountry) {
        // If the guess is correct, add all letters of the selected country to discoveredLetters
        for (char c : selectedCountry) {
            discoveredLetters.insert(tolower(c));
        }
        // Return true in case guess was correct
        return true;
    }
    // Return false in case guess was incorrect
    return false;
}
