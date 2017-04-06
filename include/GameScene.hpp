#ifndef __GAME_SCENE__
#define __GAME_SCENE__

#include "Scene.hpp"

class GameScene : public engine::Scene {
public:
    GameScene() : engine::Scene("Game") {}

    ~GameScene() {}

    bool init();
    bool shutdown();

    bool draw();
};

#endif
