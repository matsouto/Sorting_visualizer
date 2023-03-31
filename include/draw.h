#pragma once

#include <global.h>

void clearScreen(void);
void presentScene(void);
void drawState(
    std::vector<int> v,
    SDL_Renderer *renderer,
    unsigned int red,
    unsigned int blue);

void renderTest(void);