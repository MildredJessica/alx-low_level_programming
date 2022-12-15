#include <stdio.h>
/**
 * main -Entry point
 * Prints the first 50 fibonnacci numbers
 * Return: Always 0
 */
int main(void)
{
	int num;
	long sum;
	long i = 1;
	long j = 2;

	printf("%ld, %ld, ", i, j);
	for  (num = 0; num < 47; num++)
	{
		sum = j + i;
		i = j;
		j = sum;
		printf("%ld, ", sum);
	}
	sum = j + i;
	printf("%ld", sum);
	printf("\n");
	return (0);
}
