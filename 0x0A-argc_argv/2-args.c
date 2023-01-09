#include "main.h"
#include <stdio.h>

/**
 * main - Prints the arguments passed to it
 * @argc: Argument counter
 * @argv: One dimensional array
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
