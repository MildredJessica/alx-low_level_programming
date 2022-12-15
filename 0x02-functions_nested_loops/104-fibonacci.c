#include <stdio.h>

/**
 * print_98_fibonacci - Prints the 98 fibonacci numbers
 * Prints the first 98 fibonacci numbers
 * Return: Nothing
 */
void print_98_fibonacci(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int sum = 0;
	int num = 0;

	printf("%lu, %lu, ", i, j);
	while (num < 95)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf("%lu, ", sum);
		num++;
	}
	sum = j + i;
	printf("%lu", sum);
	printf("\n");
}

/**
 * main - Entry point
 * Prints the first 98 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	print_98_fibonacci();
	return (0);
}
