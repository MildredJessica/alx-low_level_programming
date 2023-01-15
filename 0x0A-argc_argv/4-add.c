#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Adds the arguments passed
 * @argc: Argument counter
 * @argv: One dimensional array
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}

			}
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
