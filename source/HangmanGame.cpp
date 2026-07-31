#include "HangmanGame.h"                        // HangamanGame header
using namespace std;                            // To avoid std::

HangmanGame::HangmanGame()
    : player(),
      country(),
      display(&country, &player)
{
}
void HangmanGame::play()
{
    int choice = display.showWelcome();
}