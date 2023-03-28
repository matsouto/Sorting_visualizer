#pragma once

#include "../include/algorithms.h"

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