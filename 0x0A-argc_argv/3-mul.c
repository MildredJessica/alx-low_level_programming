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

	if (argc <= 1)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			multiply *= atoi(argv[i]);
		}
		printf("%d\n", multiply);
	}
	return (1);
}
