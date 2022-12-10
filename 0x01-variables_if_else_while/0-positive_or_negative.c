#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *Assign a random number to the variable n
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%x is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%x is zero\n", n);
	}
	else
	{
		printf("%x is negative\n", n);
	}
	return (0);
}
