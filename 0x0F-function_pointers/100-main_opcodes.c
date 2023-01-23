#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print its own opcode
 * @argc: number of arguments
 * @argv: argument variables passed
 * Return: Always 0/
 */
int main(int argc, char **argv)
{
	int i, j;
	char *s;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (char *)main;
	for (j = 0; j < i; j++)
	{
		if (j == i - 1)
			printf("%02hhx\n", s[j]);
		printf("%02hhx ", s[j]);
	}
	return (0);
}
