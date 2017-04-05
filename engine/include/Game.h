#ifndef __Game__
#define __Game__

#include "TextureManager.h"
#include "sdl2include.hpp"
#include <unordered_map>
#include <string>

class Game
{
	public:
		Game(std::string name, std::pair<int, int> window_size)
		: title(name), m_window_size(window_size) {}
		~Game() {}
		// simply set the running variable to true
		bool init();
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
		std::string title;
		std::pair<int, int> m_window_size;
		TextureManager* m_tm;
		SDL_Rect m_sourceRectangle; // the first rectangle
		SDL_Rect m_destinationRectangle; // another rectangle
		SDL_Window* m_pWindow;
		SDL_Renderer* m_pRenderer;
		bool m_bRunning;
	};

#endif /* defined(__Game__) */