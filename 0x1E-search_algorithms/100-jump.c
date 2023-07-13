#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *              using the Jump search algorithm
 * @array: Ponter to the first element of the array to search in
 * @size: Size of the array
 * @value: Value to search for
 * Return: -1 if the array is NULL or value not in array otherwise index
 */
int jump_search(int *array, size_t size, int value)
{
size_t end = sqrt(size);
size_t start = 0;
size_t i;

if (array == NULL)
return (-1);
printf("Value checked array[%lu] = [%d]\n", start, array[start]);
while (array[end] < value && start < size)
{
printf("Value checked array[%lu] = [%d]\n", end, array[end]);
start = end;
end += sqrt(size);
if (end > size - 1)
end = size;
}
printf("Value found between indexes [%lu] and [%lu]\n", start, end);
for (i = start; i <= end; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (end == size)
break;
if (array[i] == value)
return (i);
}
return (-1);
}
