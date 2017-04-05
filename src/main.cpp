#include "Game.h"
#include "gameglobals.hpp"
#include <iostream>

using namespace std;

int main()
{
	Game* g_game = 0;
	g_game = new Game(globals::game_name,globals::window_size);
	g_game->init();
	cout << g_game->running() << endl;
	while(g_game->running())
	{
		
		//g_game->update();
		g_game->render();
		g_game->handleEvents();
	}
	
	g_game->clean();
	
	return 0;
}