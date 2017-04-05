#include "TextureManager.h"
#include <iostream>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>

TextureManager* TextureManager::instance = 0;

TextureManager* TextureManager::getInstance(){
	if(instance == 0){
		instance = new TextureManager();
		return instance;
	}
	return instance;
}

TextureManager::TextureManager(){}

bool TextureManager::load(std::string fileName,std::string id, SDL_Renderer* pRenderer) {
	
	SDL_Surface* pTempSurface = IMG_Load(fileName.c_str());
	
	if(pTempSurface == 0)
	{
		return false;
	}
	
	SDL_Texture* pTexture = SDL_CreateTextureFromSurface(pRenderer, pTempSurface);
	SDL_FreeSurface(pTempSurface);
	
	// everything went ok, add the texture to our list
	if(pTexture != 0)
	{
		m_textureMap[id] = pTexture;
		return true;
	}
	// reaching here means something went wrong
	return false;
}

void TextureManager::draw(std::string id, int x, int y, int width, int height, SDL_Renderer* pRenderer, SDL_RendererFlip flip){
	
	SDL_Rect srcRect;
	SDL_Rect destRect;

	srcRect.x = 0;
	srcRect.y = 0;
	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = height;

	destRect.x = x;
	destRect.y = y;

	SDL_RenderCopyEx(pRenderer, m_textureMap[id], &srcRect, &destRect, 0, 0, flip);
}

void TextureManager::drawFrame(std::string id, int x, int y, int width, int height, int i, 
		int j, SDL_Renderer* pRenderer, SDL_RendererFlip flip) {
	SDL_Rect srcRect;
	SDL_Rect destRect;
	srcRect.x = width * i;
	srcRect.y = height * j;
	srcRect.w = destRect.w = width;
	srcRect.h = destRect.h = height;
	destRect.x = x;
	destRect.y = y;
	SDL_RenderCopyEx(pRenderer, m_textureMap[id], &srcRect, &destRect, 0, 0, flip);
}