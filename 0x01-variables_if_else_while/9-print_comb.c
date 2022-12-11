#include <stdio.h>

/**
 * main - Entry point
 * Prints all combination of single digits followed by ,
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch == '9')
			continue;
		 putchar(',');
		 putchar(' ');
	}
	putchar('\n');
	return (0);
}
