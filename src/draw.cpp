#include "../include/draw.h"

/* These functions de
al with preparing to render: prepareScene, and displaying it: presentScene. In prepareScene, we set the colour of SDL renderer using SDL_SetRenderDrawColor. This function takes five parameters: the pointer to the renderer that we created in init.c and the RGBA of the colour that we want to use. These values go from 0 to 255, with 0 being darkest and 255 being full. The final parameter is the alpha value. 0 is fully transparent whereas 255 is opaque. SDL_RenderPresent takes just one parameter - once again the renderer that we are using. */

void clearScreen(void)
{
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);
}

void presentScene(void)
{
  SDL_RenderPresent(renderer);
}

void renderTest(void)
{
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderDrawPoint(renderer, 640 / 2, 480 / 2);
}

/* Updates the screen with the current sorting statate */
void drawState(
    std::vector<int> v,
    SDL_Renderer *renderer,
    unsigned int red,
    unsigned int blue)
{
  int index = 0;
  // Draws a rectangle for each integer in "v"
  for (int i : v)
  {
    if (index == red)
    {
      SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // red;
    }
    else if (index == blue)
    {
      SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); // green;
    }
    else
    {
      SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // white;
    }

    SDL_RenderDrawLine(renderer, index, 99, index, i);
    index++;
  }
}