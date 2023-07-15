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
size_t bound = 1;

if (size == 0 || array == NULL)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}
printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
return (binary_search_new(array, bound / 2, bound, value));
}

/**
 * binary_search_new - Uses Binary Search algorithm to search for a value
 * @array: Pointer to the first element of the array
 * @mini: The start of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: -1 if the array is NULL or value not found other index of value
 */
int binary_search_new(int *array, size_t mini, size_t size, int value)
{
int h;
int l = mini;
int r = size - 1;

if (array == NULL)
return (-1);
while (l <= r)
{
print_array(array, l, r);
h = (floor(l + r) / 2);
if (array[h] == value)
return (h);
if (array[h] > value)
r = h - 1;
else
l = h + 1;
}
return (-1);
}

/**
 * print_array - Prints the elements of an array
 * @array: Pointer to the first element of the arrat
 * @l: Start of the array
 * @r: End of the array
 * Return: Nothing
 */
void print_array(int *array, int l, int r)
{
int i;
printf("Searching in array: ");
for (i = l; i < r; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
}
