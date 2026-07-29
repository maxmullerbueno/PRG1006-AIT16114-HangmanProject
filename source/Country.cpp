#include "Country.h"                             // Country header

#include <cstdlib>                               // Necessary for rand() and srand()
#include <ctime>                                 // Necessary for time()   

// Constructor countries
Country::Country(){
// Starts randomly based on current time
srand(time(0));
    
// Provide list of countries
countries = "Australia", "Brazil", "Canada", "Cambodia", "France", "China", "Indonesia", "Colombia", "Chile", "Bahamas", "Mexico", "Germany", 
    "Portugal", "Spain", "Uruguay", "Paraguay", "Korea", "Japan", "Russia", "South Africa", "United States", "New Zeland", "Greece", 
    "Turkey", "Thailand", "Philippines", "Panama", "England", "Chad", "Etiopia", "Egypt", "Morroco", "Italy", "Qatar", "Venezuela"
}

// Pick it up one country of the list
std::string Country::selectRandomCountry() {
    
    int index = rand() % countries.size();
    selectedCountry = countries[index];
    discoveredLetters.clear();
    
    return selectedCountry;
}

// Checks if the guessed letter really exists
bool Country::checkLetter(char letter) {
    bool found = false;
    char lowerLetter = tolower(letter);

    // Reads each character in the repository
    for (char c : selectedCountry) {
        if (tolower(c) == lowerLetter) {
            discoveredLetters.insert(lowerLetter);
            found = true;
        }
    }
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
    return true; 
}

// Returns hidden word
std::string Country::getDisplayWord() {
    std::string displayWord = "";

    for (char c : selectedCountry) {
        // If the letter 'c' was found, add it. Otherwise, add underscore.
        if (discoveredLetters.count(tolower(c)) > 0) {
            displayWord += c;
        } else {
            displayWord += '_';
        }
        displayWord += ' '; 
    }
    return displayWord;
}