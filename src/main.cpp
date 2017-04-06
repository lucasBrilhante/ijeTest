#include "Game.h"
#include "gameglobals.hpp"
#include <iostream>

using namespace std;

int main()
{
	Game* g_game = 0;
	g_game = new Game(globals::game_name,globals::window_size);
	g_game->run();
	
	return 0;
}