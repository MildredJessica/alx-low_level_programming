#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Argument counter
 * @argv: One dimensional array
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			multiply *= atoi(argv[i]);
		}
		printf("%d\n", multiply);
	} else
		printf("Error\n");
	return (1);
}
