#include <stdio.h>
/**
 * main -Entry point
 * Prints the first 50 fibonnacci numbers
 * Return: Always 0
 */
int main(void)
{
	int num, sum;
	int i = 1;
	int j = 2;

	printf("%d, %d, ", i, j);
	for  (num = 0; num < 49; num++)
	{
		sum = j + i;
		i = j;
		j = sum;
		num++;
		printf("%d, ", sum);
	}
	sum = j + i;
	printf("%d", sum);
	printf("\n");
	return (0);
}
