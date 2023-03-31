// TODO: Pesquisar como gerar formas com SDL2

#include "include/global.h"
#include "include/algorithms.h"
#include "include/draw.h"
#include "include/init.h"
#include "include/input.h"

/* Refs: https://www.parallelrealities.co.uk/tutorials/shooter/shooter1.php */

int main()
{

    initSDL();
    clearScreen();

    std::vector<int> values = {};
    values = generateArangedValues(100);
    // values = generateRandomValues();

    values = insertionSort(values);

    /* Pauses all SDL subsystems for a variable amount of milliseconds */
    SDL_Delay(1000);

    /* Frees memory */
    SDL_DestroyWindow(window);

    /* Shuts down all SDL subsystems */
    SDL_Quit();

    return 0;
}
