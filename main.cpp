// TODO: Pesquisar como gerar formas com SDL2

#include <SDL2/SDL.h>
#include <iostream>
#include <random>

#include "include/defs.h"
#include "include/algorithms.h"
#include "include/init.h"

/* Refs: https://www.parallelrealities.co.uk/tutorials/shooter/shooter1.php */

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

    initSDL();

    // /* Pauses all SDL subsystems for a variable amount of milliseconds */
    SDL_Delay(DELAY);

    // /* Frees memory */
    // SDL_DestroyWindow(window);

    // /* Shuts down all SDL subsystems */
    // SDL_Quit();
    return 0;
}
