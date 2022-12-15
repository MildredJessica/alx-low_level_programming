#include <stdio.h>

/**
 * main - Entry point
 * Prints natural number below 1024 that are multiples of 3 or 5
 * Return: Always 0
 */
int main(void)
{
	int num, sum = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
