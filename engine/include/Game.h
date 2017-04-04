#ifndef __Game__
#define __Game__
#include "TextureManager.h"
#include <SDL2/SDL.h>

class Game
{
	public:
		Game() {}
		~Game() {}
		// simply set the running variable to true
		bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
		void render();
		void update();
		void handleEvents();
		void clean();
		void draw();
		// a function to access the private running variable
		bool running() { return m_bRunning; }
	
	private:
		int x;
		int y;
		int i;
		int j;
		TextureManager* m_tm;
		SDL_Rect m_sourceRectangle; // the first rectangle
		SDL_Rect m_destinationRectangle; // another rectangle
		SDL_Window* m_pWindow;
		SDL_Renderer* m_pRenderer;
		bool m_bRunning;
	};

#endif /* defined(__Game__) */