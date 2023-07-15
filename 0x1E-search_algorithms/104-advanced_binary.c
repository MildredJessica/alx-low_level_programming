#include "search_algos.h"

/**
 * recursive_advanced_binary - Recursively searches for a value
 *              in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @l: The first element to search in the array
 * @r: The number of elements in array
 * @value: The value to search for
 * Return: -1 if the array is NULL or value is not present otherwise 1
 */
int recursive_advanced_binary(int *array, size_t l, size_t r, int value)
{
size_t i;

if (r < l)
return (-1);
print_array(array, l, r);

i = l + (r - l) / 2;
if (array[i] == value && (i == l || array[i - 1] != value))
return (i);
if (array[i] >= value)
return (recursive_advanced_binary(array, l, i, value));
return (recursive_advanced_binary(array, i + 1, r, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: -1 if the array is NULL or value is not present otherwise 1
 */
int advanced_binary(int *array, size_t size, int value)
{
if (size == 0 || array == NULL)
return (-1);
return (recursive_advanced_binary(array, 0, size - 1, value));
}

/**
 * print_array - Prints the elements of an array
 * @array: Pointer to the first element of the array
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

