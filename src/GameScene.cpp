#include "log.h"
#include "GameScene.hpp"


bool GameScene::init()
{
    engine::Scene::init();

    // ===== Load Texture =====
    INFO("Init game scene");

    return true;
}


bool GameScene::shutdown()
{
    engine::Scene::shutdown();

    INFO("Destroy");

    return true;
}


bool GameScene::draw()
{
    INFO("draw");

    return true;
}