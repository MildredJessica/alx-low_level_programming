#include "main.h"
#include <stdio.h>

/**
 * main - Prints the function name
 * @argc: Argument count
 * @argv: Array of strings
 * Return: Prints the function name
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
