#include "search_algos.h"

/**
 * binary_search - Uses Binary Search algorithm to search for a value in a list
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search for
 * Return: -1 if the array is NUL or alue not found other index of value
 */
int binary_search(int *array, size_t size, int value)
{
int h, l = 0;
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
