#include "../include/init.h"

void initSDL(void)
{

    int rendererFlags, windowFlags;
    rendererFlags = SDL_RENDERER_ACCELERATED;
    windowFlags = 0;

    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        std::cout << "SDL could not be initialized: " << SDL_GetError();
        exit(1);
    }

    /* Creates a SDL window */
    window = SDL_CreateWindow("Sorting Visualizer",    // Title of the SDL window
                              SDL_WINDOWPOS_UNDEFINED, // Position x of the window
                              SDL_WINDOWPOS_UNDEFINED, // Position y of the window
                              WIDTH,                   // Width of the window in pixels
                              HEIGHT,                  // Height of the window in pixels
                              windowFlags);            // Additional flag(s)

    /* Checks if window has been created; if not, exits program */
    if (window == NULL)
    {
        std::cout << "SDL could not be initialized: " << SDL_GetError();
        exit(1);
    }

    SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

    renderer = SDL_CreateRenderer(window,
                                  -1,
                                  rendererFlags);

    if (renderer == NULL)
    {
        std::cout << "Failed to create renderer: " << SDL_GetError();
        exit(1);
    }

    SDL_RenderSetScale(renderer, WIDTH / 100, HEIGHT / 100);
}