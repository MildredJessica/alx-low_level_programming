#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concats all arguments to your program
 * @ac: Parameter
 * @av: Pointer to a pointer
 * Return: Pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *arr;
	int count = 0;
	int m = 0;


	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	count++;
	arr = malloc(sizeof(char) * count);
	if (arr == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			arr[m] = av[k][l];
			m++;
		}
		arr[m] = '\n';
		m++;
	}
	arr[m] = '\0';
	return (arr);
}
