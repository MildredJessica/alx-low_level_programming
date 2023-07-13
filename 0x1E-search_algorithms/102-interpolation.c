#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                          using the Interpolation search algorithm
 * @array: Pointer to first element of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: -1 if value is not present or array is NULL otherwise index
 */ 
int interpolation_search(int *array, size_t size, int value)
{
size_t low = 0;
size_t high = size - 1;
size_t pos;

if (array == NULL)
return (-1);
while (array[high] != array[low])
{
pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
if (pos < low || pos > high)
{
printf("Value checked array[%lu] is out of range\n", pos);
break;
}
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
if (array[pos] < value)
low = pos + 1;
else if (value < array[pos])
high = pos - 1;
else
return pos;
}
//if (value == array[low])
//return low;
//else
return (-1);
}
