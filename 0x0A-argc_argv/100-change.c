#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Prints the minimum amount of change
 * @argc: Counter
 * @argv: One dimensional array
 * Return: The amount of cents
 */
int main(int argc, char *argv[])
{
	int num = 0;
	int count = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num == 0)
	{
		printf("0\n");
		return (1);
	}
	for (; num > 0; count++)
	{
		if (num - 25 >= 0)
			num = num - 25;
		else if (num - 10 >= 0)
			num = num - 10;
		else if (num - 5 >= 0)
			num = num - 5;
		else if (num - 2 >= 0)
			num = num - 2;
		else if (num == 1)
			num = num - 1;
	}
	printf("%d\n", count);
	return (0);
}
