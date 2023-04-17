#include <SDL3/SDL.h>

#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
    // [-nw] - key to drop window creation (for test purpuses)
    const bool no_window = (argc >= 2 && "-nw" == argv[1]) ? true : false;

    const int init_result = SDL_Init(SDL_INIT_VIDEO);

    if (init_result != 0) {
        const char *err_message = SDL_GetError();
        std::cerr << "error: failed call SDL_Init: " << err_message << std::endl;
        return EXIT_FAILURE;
    }

    SDL_Window *const window = !no_window ? SDL_CreateWindow(
                    "title",
                    640,
                    480,
                    SDL_WINDOW_OPENGL
                    ): nullptr;

    if (!no_window && window == nullptr) {
        const char *err_message = SDL_GetError();
        std::cerr << "error: failed call SDL_CreateWindow: " << err_message << std::endl;
        SDL_Quit();
        return EXIT_FAILURE;
    }

    if (window != nullptr) {
        SDL_Renderer *renderer = SDL_CreateRenderer(
                window,
                "Virtual Console",
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
            switch (event.type) {
                case SDL_EVENT_QUIT:
                    event_work = false;
                    break;
                case SDL_EVENT_KEY_DOWN:
                    std::cout << "Key pressed: " << SDL_GetKeyName(event.key.keysym.sym) << std::endl;
                    break;
                case SDL_EVENT_KEY_UP:
                    std::cout << "Key pressed: " << SDL_GetKeyName(event.key.keysym.sym) << std::endl;
                    break;
                default:
                    break;
            }
        }
    }

    return EXIT_SUCCESS;
}
