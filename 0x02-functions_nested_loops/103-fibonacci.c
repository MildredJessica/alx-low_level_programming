#include <stdio.h>
/**
 * main - Entry point
 * Prints the sum even valued terms in the fibonnacci sequence
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	long sum = 2;
	long i = 1;
	long j = 2;

	printf("%ld", sum);
	while (num < 4000000)
	{
		num = j + i;
		if ((num % 2) == 0)
		{
			printf(", ");
			sum += num;
			printf("%ld", sum);
		}
		i = j;
		j = num;
	}
	printf("\n");
	return (0);
}

