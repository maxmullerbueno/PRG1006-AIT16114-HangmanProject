#include "Country.h"                             // Country header

#include <cstdlib>                               // Necessary for rand() and srand()
#include <ctime>                                 // Necessary for time()   

// Constructor countries
Country::Country(){
countries = "Australia", "Brazil", "Canada", "Cambodia", "France", "China", "Indonesia", "Colombia", "Chile", "Bahamas", "Mexico", "Germany", 
    "Portugal", "Spain", "Uruguay", "Paraguay", "Korea", "Japan", "Russia", "South Africa", "United States", "New Zeland", "Greece", 
    "Turkey", "Thailand", "Philippines", "Panama", "England", "Chad", "Etiopia", "Egypt", "Morroco", "Italy", "Qatar", "Venezuela"
}

// Random countries selection
std::string Country::selectRandomCountry() {