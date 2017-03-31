#include "Game.h"
#include <stdio.h>
#include <iostream>
#include <SDL2/SDL_image.h>

using namespace std;
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags)
{
	// attempt to initialize SDL
	if(SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		cout << "SDL init success\n";
		// init the window
		m_pWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if(m_pWindow != 0) // window init success
		{
			cout << "window creation success\n";
			m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);
			if(m_pRenderer != 0) // renderer init success
			{
				cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(m_pRenderer,255,255,255,255);
				
			}
			else
			{
				cout << "renderer init fail\n";
				return false; // renderer init fail
			}
		}
		else
		{
			cout << "window init fail\n";
			return false; // window init fail
		}
	}
	else
	{
		cout << "SDL init fail\n";
		return false; // SDL init fail
	}
	cout << "init success\n";
	m_bRunning = true; // everything inited successfully,
	//parte de imagem
	x = 0;y=0;
	render();

	//SDL_RenderCopy(m_pRenderer, m_pTexture, &m_sourceRectangle, &m_destinationRectangle);

	
	return true;
}

void Game::render()
{
	SDL_Texture * pika_texture = NULL;
	SDL_Surface * image = NULL;
 	image = IMG_Load("assets/pika.png");

     if (image == NULL)
     {
   		cout << "load image fail\n";

        std::exit(EXIT_FAILURE);
     }

     cout << "load image sucess\n";

     pika_texture = SDL_CreateTextureFromSurface(m_pRenderer, image);
 
     if (pika_texture == NULL)
     {
   		cout << "Convert to texture fail\n";

         std::exit(EXIT_FAILURE);
     }
      cout << "convert image sucess\n";

     int play_button_w = image->w;
     int play_button_h = image->h;
 
     SDL_FreeSurface(image);
     image = NULL;
	 SDL_RenderClear(m_pRenderer);
     cout << "setup sucess\n";

     SDL_Rect renderQuad = {x, y, play_button_w, play_button_h};
     cout << "load image sucess\n";

     SDL_RenderCopy(m_pRenderer, pika_texture, NULL, &renderQuad);
      cout << "rendercopy sucess\n";

     SDL_RenderPresent(m_pRenderer);
     cout << "show\n";

	/*
	SDL_RenderClear(m_pRenderer); // clear the renderer to
	SDL_RenderPresent(m_pRenderer); // draw to the screen
	*/
}
void Game::handleEvents()
{
	SDL_Event event;
	if(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		
		case SDL_QUIT:
			m_bRunning = false;
			break;
		case SDL_KEYDOWN:
		    switch (event.key.keysym.sym)
		    {
		        case SDLK_LEFT:  x = x - 10; break;
		        case SDLK_RIGHT: x = x + 10; break;
		        case SDLK_UP:    y = y - 10; break;
		        case SDLK_DOWN:  y = y + 10; break;
		    }
		    break;
		default:
			break;
		}
	}
}
void Game::clean()
{
	cout << "cleaning game\n";
	SDL_DestroyWindow(m_pWindow);
	SDL_DestroyRenderer(m_pRenderer);
	SDL_Quit();
}