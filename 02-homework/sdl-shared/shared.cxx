#include <SDL3/SDL.h>
#include <cstdlib>

int main(int argc, char *argv[]) {
    const int WIDTH = 640;
    const int HEIGHT = 480;

    SDL_Window *window = nullptr;
    SDL_Renderer *renderer = nullptr;

    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow("Hello SDL", WIDTH, HEIGHT, 0);
    renderer = SDL_CreateRenderer(window, nullptr,
                                  SDL_RENDERER_ACCELERATED |
                                  SDL_RENDERER_PRESENTVSYNC);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
} 