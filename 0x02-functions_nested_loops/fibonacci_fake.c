#include <stdio.h>
#define LARGEST 10000000000
/**
 * print_98_fibonacci - Prints the 98 fibonacci numbers
 * Prints the first 98 fibonacci numbers
 * Return: Nothing
 */
void print_98_fibonacci(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int k, u = 0;
	unsigned long int num1, num2;
	unsigned long int sum = 0;
	int num = 2;

	printf("%lu, %lu, ", i, j);
	while (num < 97)
	{
		if (i + j > LARGEST || k > 0 || u > 0)
		{
			num1 = (i + j) / LARGEST;
			sum = (i + j) % LARGEST;
			num2 = k + u + num1;
			k = u;
			u = num2;
			i = j;
			j = sum;
			printf("%lu%010lu", u, j);
		} else
		{
			sum = i + j;
			i = j;
			j = sum;
			printf("%lu, ", sum);
			num++;
		}
	}
	sum = j + i;
	printf("%lu\n", sum);
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
