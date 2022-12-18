#include <stdio.h>

/**
 * main - entry point
 * Prints prime factors
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	int div = 2;
	long factor = 0;

	while (num > 1)
	{
		if (num % div == 0)
		{
			num = num / divide;
			factor = divide;
		}
		divide++;
	}
	printf("%ld\n", factor);
	return (0);
}
