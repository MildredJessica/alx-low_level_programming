#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: Always 0
 */
int main(void)
{
	unsigned long int k = 0, i = 1, u = 0, j = 2;
	unsigned long int num1, num2, num3;
	int num;

	printf("%lu, %lu, ", i, j);
	for (num = 2; num < 98; num++)
	{
		if (i + j > LARGEST || u > 0 || k > 0)
		{
			num1 = (i + j) / LARGEST;
			num2 = (i + j) % LARGEST;
			num3 = k + u + num1;
			k = u, u = num3;
			i = j, j = num2;
			printf("%lu%010lu", u, j);
		}
		else
		{
			num2 = i + j;
			i = j, j = num2;
			printf("%lu", j);
		}
		if (num != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
