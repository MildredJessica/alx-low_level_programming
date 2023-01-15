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
	int i;
	int add = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			printf("Ehere%d\n", isalpha('j'));
			if ((argv[i] >= 'A') && (argv[i] <= 'Z'))
			{
				printf("Error\n");
				break;
			}
			else
				add += atoi(argv[i]);

			printf("%d\n", add);
		}
	}else 
		printf("%d\n", add);
	return (1);
}
