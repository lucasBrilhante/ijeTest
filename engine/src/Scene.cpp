#include "Scene.hpp"

#include "log.h"

using namespace engine;

bool Scene::init()
{
    INFO("Init scene " << m_name);
    return true;
}

bool Scene::shutdown()
{
    INFO("Shutdown scene " << m_name);
    return true;
}

bool Scene::draw()
{
    return true;
}
