#include "Engine/Game.hh"
#include <iostream>

int main()
{
  Game* game{new Game()};
  game->Run();

  return EXIT_SUCCESS;
}