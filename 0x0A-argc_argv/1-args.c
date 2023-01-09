#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints the number of arguments passed
 * @argc: Argument count
 * @argv: One dimensional array
 * Return: The number of arguments passed
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int count = 0;

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		count++;
	}
	printf("%d\n", count);
	return (0);
}
