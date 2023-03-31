#pragma once

#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

#include "defs.h"

extern SDL_Renderer *renderer;
extern SDL_Window *window;

extern std::random_device rd; // Random engine chosen