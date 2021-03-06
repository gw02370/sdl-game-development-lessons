#ifndef __GAME_H__
#define __GAME_H__

#include "SDL2/SDL.h"
#include "Player.h"
#include "GameObject.h"
#include "texture_manager.h"


class Game
{
   public:
    Game();
    ~Game();
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void render();
    void update();
    void handleEvents();
    void clean();
    bool running() {return m_bRunning;}
   private:
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;

    SDL_Texture* m_pTexture;
    SDL_Rect m_sourceRectangle;
    SDL_Rect m_destinationRectangle;

    GameObject m_go;
    Player m_player;


    int m_currentFrame;
    //TextureManager m_textureManager;

    bool m_bRunning;
};

#endif
