#include "Game.h"
#include <stdio.h>
#include <iostream>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>
#include "TextureManager.h"


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
			m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
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
	m_tm = new TextureManager();
	m_tm->load("assets/pikasheet.png","pika",m_pRenderer);
	render();
	//SDL_RenderCopy(m_pRenderer, m_pTexture, &m_sourceRectangle, &m_destinationRectangle);

	
	return true;
}

void Game::render()
{
	SDL_RenderClear(m_pRenderer);

	m_tm->drawFrame("pika",x,y,64,
		64,i,j,m_pRenderer);
	cout << "Frame desenhado\n";

	SDL_RenderPresent(m_pRenderer);
	cout << "Mostrado\n";

	/*SDL_Texture * pika_texture = NULL;
	SDL_Surface * image = NULL;
 	image = IMG_Load("assets/pikasheet.png");

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

     int play_button_w = image->w/4;
     int play_button_h = image->h/4;
 
     SDL_FreeSurface(image);
     image = NULL;
	 SDL_RenderClear(m_pRenderer);
     cout << "setup sucess\n";

     SDL_Rect renderQuad = {x, y, play_button_w, play_button_h};
     cout << "load image sucess\n";
     SDL_Rect SrcR{i,j,64,64};
     SDL_RenderCopy(m_pRenderer, pika_texture, &SrcR, &renderQuad);
      cout << "rendercopy sucess\n";

     SDL_RenderPresent(m_pRenderer);
     cout << "show\n";

	
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
		        case SDLK_LEFT:  
		        	x = x - 20; 
		        	j = 1;
		        	i = (i+ 1)%4;
		        	break;
		        case SDLK_RIGHT: 
		        	x = x + 20; 
		        	j = 2;
		        	i = (i+ 1)%4;
		        	break;
		        case SDLK_UP:    
		        	j = 3;
		        	i = (i+ 1)%4;
			        y = y - 20; 
			        break;
		        case SDLK_DOWN:
		        	j = 0;
		        	i = (i+ 1)%4;  
		        	y = y + 20; 
		        	break;
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