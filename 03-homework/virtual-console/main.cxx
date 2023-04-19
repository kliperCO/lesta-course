#include <cstdlib>
#include <iostream>
#include <array>

#include <SDL.h>

#pragma pack(push, 4)
struct bind
{
    SDL_Keycode key;
    std::string_view name;
};
#pragma pack(pop)

void check_input(const SDL_Event& e)
{
    // SUP Game Box Plus
    const std::array<::bind, 10> keys{ {
                                              { SDLK_w, "button_up" },
                                              { SDLK_a, "button_left" },
                                              { SDLK_s, "button_down" },
                                              { SDLK_d, "button_right" },
                                              { SDLK_LEFT, "button_y" },
                                              { SDLK_UP, "button_x" },
                                              { SDLK_RIGHT, "button_a" },
                                              { SDLK_DOWN, "button_b" },
                                              { SDLK_f, "button_select" },
                                              { SDLK_RETURN, "button_start" }
                                      } };

    const auto it = std::find_if(begin(keys),
                         end(keys),
                         [&](const ::bind& b) { return b.key == e.key.keysym.sym; });

    if (it != end(keys))
    {
        std::cout << it->name << ' ';
        if (e.type == SDL_EVENT_KEY_DOWN)
        {
            std::cout << "is pressed" << std::endl;
        }
        else
        {
            std::cout << "is released" << std::endl;
        }
    }
}

int main(int argc, char *argv[]) {
    // [-nw] - key to drop window creation (for test purpuses)
    const bool no_window = (argc >= 2 && "-nw" == argv[1]) ? true : false;

    const int init_result = SDL_Init(SDL_INIT_VIDEO);

    if (init_result != 0) {
        const char *error_message = SDL_GetError();
        std::cerr << "Error: failed call SDL_Init: " << error_message << std::endl;
        return EXIT_FAILURE;
    }

    SDL_Window *const window = !no_window ? SDL_CreateWindow(
            "Virtual Console",
            640,
            480,
            SDL_WINDOW_OPENGL
    ): nullptr;

    if (!no_window && window == nullptr) {
        const char *error_message = SDL_GetError();
        std::cerr << "Error: failed call SDL_CreateWindow: " << error_message << std::endl;
        SDL_Quit();
        return EXIT_FAILURE;
    }

    if (window != nullptr) {
        SDL_Renderer *renderer = SDL_CreateRenderer(
                window,
                "opengl",
                SDL_RENDERER_ACCELERATED
        );

        if (renderer == nullptr) {
            std::cerr << SDL_GetError() << std::endl;
            return EXIT_FAILURE;
        }

        SDL_RenderPresent(renderer);
    }

    bool event_work = true;

    SDL_Event event;
    while (event_work) {
        while (SDL_PollEvent(&event)){
            switch (event.key.type) {
                case SDL_EVENT_QUIT:
                    event_work = false;
                    break;
                case SDL_EVENT_KEY_DOWN:
                    [[fallthrough]];
                case SDL_EVENT_KEY_UP:
                    check_input(event);
                    break;
                default:
                    break;
            }
        }
    }

    SDL_DestroyWindow(window);

    SDL_Quit();

    return EXIT_SUCCESS;
}