// TODO: Pesquisar como gerar formas com SDL2

#include <SDL2/SDL.h>
#include <iostream>
#include <random>

/* Sets constants */
#define WIDTH 640
#define HEIGHT 480
#define DELAY 3000

#define n_columns 50
#define max_value 99

std::vector<int> insertionSort(std::vector<int> values)
{
  for (int i = 1; i < values.size(); i++)
  {
    int key = values[i];
    int j = i - 1;
    while (key < values[j] && j >= 0)
    {
      values[j + 1] = values[j];
      j--;
    }
    values[j + 1] = key;
  }
  return values;
}

int main()
{

  std::random_device rd; // Random engine chosen
  std::uniform_int_distribution distribution(0, max_value);

  std::vector<int> values = {};

  // Generate the values to be sorted
  for (int i = 0; i <= n_columns; i++)
  {
    int number = distribution(rd);
    values.push_back(number);
    std::cout << number << " ";
  }

  std::cout << std::endl;

  values = insertionSort(values);

  for (int i = 0; i <= values.size(); i++)
  {
    std::cout << values[i] << " ";
  }

  std::cout << std::endl;

  // -------------------------------
  SDL_Window *window = NULL;

  if (SDL_Init(SDL_INIT_VIDEO) != 0)
  {
    std::cout << "SDL could not be initialized: " << SDL_GetError();
    return 1;
  }

  // /* Creates a SDL window */
  // window = SDL_CreateWindow("Sorting Visualizer",    /* Title of the SDL
  // window */
  //                           SDL_WINDOWPOS_UNDEFINED, /* Position x of the
  //                           window */ SDL_WINDOWPOS_UNDEFINED, /* Position y
  //                           of the window */ WIDTH,                   /*
  //                           Width of the window in pixels */ HEIGHT, /*
  //                           Height of the window in pixels */ 0); /*
  //                           Additional flag(s) */

  // /* Checks if window has been created; if not, exits program */
  // if (window == NULL)
  // {
  //   std::cout << "SDL could not be initialized: " << SDL_GetError();
  //   return 1;
  // }

  // /* Pauses all SDL subsystems for a variable amount of milliseconds */
  // SDL_Delay(DELAY);

  // /* Frees memory */
  // SDL_DestroyWindow(window);

  // /* Shuts down all SDL subsystems */
  // SDL_Quit();
  return 0;
}
