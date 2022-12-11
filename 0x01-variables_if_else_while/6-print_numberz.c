#include <stdio.h>

/**
 * main - Entry point
 * Prints all single digits of base 10 using only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
