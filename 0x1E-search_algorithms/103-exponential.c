#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *              using the Exponential search algorithm
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: -1 if the array is NULL or value not in the array otherwise index
 */
int exponential_search(int *array, size_t size, int value)
{
if (size == 0 || array == NULL) {
        return (-1);
    }

    int bound = 1;
    while (bound < size && array[bound] < value) {
        bound *= 2;
    }

    return binary_search(array, min(bound + 1, size), value);
}