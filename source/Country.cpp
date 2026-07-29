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