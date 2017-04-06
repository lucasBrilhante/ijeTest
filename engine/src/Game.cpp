#include "Game.h"
#include "TextureManager.h"
#include "sdl2include.hpp"

#include <stdio.h>
#include <iostream>



using namespace std;


bool Game::init()
{
	// attempt to initialize SDL
	if(SDL_Init(SDL_INIT_EVERYTHING) >= 0)
	{
		cout << "SDL init success\n";
		// init the window
		m_pWindow = SDL_CreateWindow(
			title.c_str(), 
			SDL_WINDOWPOS_CENTERED, 
			SDL_WINDOWPOS_CENTERED, 
			m_window_size.first, 
			m_window_size.second, 
			SDL_WINDOW_SHOWN);
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
	TextureManager::getInstance()->load("assets/pikasheet.png","pika",m_pRenderer);
	TextureManager::getInstance()->load("assets/tilesheet.png","tile",m_pRenderer);

	render();
	//SDL_RenderCopy(m_pRenderer, m_pTexture, &m_sourceRectangle, &m_destinationRectangle);

	
	return true;
}

void Game::render()
{
	SDL_RenderClear(m_pRenderer);
	TextureManager::getInstance()->drawFrame("tile",0,64,64,64,6,1,m_pRenderer);
	TextureManager::getInstance()->drawFrame("tile",64,0,64,64,6,1,m_pRenderer);
	TextureManager::getInstance()->drawFrame("tile",64,64,64,64,6,1,m_pRenderer);
	TextureManager::getInstance()->drawFrame("tile",64,128,64,64,6,2,m_pRenderer);

	TextureManager::getInstance()->drawFrame("pika",x,y,64,64,i,j,m_pRenderer);


	cout << "Frame desenhado\n";

	SDL_RenderPresent(m_pRenderer);
	cout << "Mostrado\n";
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
void Game::run()
{
	init();
	while(m_bRunning)
	{
		
		//g_game->update();
		render();
		handleEvents();
	}
	
	clean();

}