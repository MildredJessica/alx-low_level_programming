#include <stdio.h>

/**
 * main - Entry point
 * Prints all possible combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int num;

	for (ch = '0'; ch <= '8'; ch++)
	{
		for (num = ch + 1; num <= '9'; num++)
		{
			putchar(ch);
			putchar(num);
			if (ch == '8')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
