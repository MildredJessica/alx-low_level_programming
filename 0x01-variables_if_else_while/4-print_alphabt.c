#include <stdio.h>

/**
 * main - Entry point
 * Prints the alphabet in lowercase excluding q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
