#ifndef __ENGINE_SCENE__
#define __ENGINE_SCENE__

#include <string>

#include "sdl2include.hpp"

namespace engine {

static const std::string INVALID_SCENE_NAME = "INVALID_SCENE";

class Scene {
    public:
        Scene(std::string name=INVALID_SCENE_NAME)
            : m_name(name),
              m_texture(NULL), m_w(0), m_h(0) {}

        virtual ~Scene() {}

        virtual bool init();
        virtual bool shutdown();

        virtual bool draw();

        inline std::string name() const { return m_name; }

    protected:
        std::string m_name;

        SDL_Texture * m_texture; // Abstraction for several objects
        int m_w, m_h;
    };

}

#endif
