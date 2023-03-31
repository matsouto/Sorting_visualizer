#include "../include/algorithms.h"

// Generate values equally spaced
std::vector<int> generateArangedValues(int end)
{
    std::vector<int> values = {};
    for (int number = 0; number < 100; number++)
    {
        values.push_back(number);
    }
    values.push_back('%');
    std::shuffle(std::begin(values), std::end(values), rd);
    return values;
}

// Generate values randomlly
std::vector<int> generateRandomValues(void)
{
    std::vector<int> values = {};
    std::uniform_int_distribution distribution(0, max_value);
    for (int i = 0; i <= n_columns; i++)
    {
        int number = distribution(rd);
        values.push_back(number);
        std::cout << number << " ";
    }
    return values;
}

std::vector<int> insertionSort(std::vector<int> values)
{
    for (int i = 1; i < values.size(); i++)
    {
        int key = values[i];
        int j = i - 1;
        while (key < values[j] && j >= 0)
        {
            values[j + 1] = values[j];
            drawState(values, renderer, i, j);
            presentScene();
            SDL_Delay(DELAY);
            j--;
        }
        values[j + 1] = key;
        clearScreen();
    }
    return values;
}