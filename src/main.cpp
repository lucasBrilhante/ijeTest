#include "Game.h"
#include <iostream>
// our Game object
Game* g_game = 0;
using namespace std;
int main(int argc, char* argv[])
{
	g_game = new Game();
	g_game->init("Chapter 1", 100, 100, 640, 480, 0);
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