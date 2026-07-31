#include "HangmanGame.h"                        // HangamanGame header
using namespace std;                            // To avoid std::

HangmanGame::HangmanGame()
    : player(),
      country(),
      display(&country, &player)
{
}