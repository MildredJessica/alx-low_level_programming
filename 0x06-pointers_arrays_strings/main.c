#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	/**
	 * s = _strcat(s, y);
	 * ptr = _strcat(s, y)
	 */;
	ptr = _strncat(s1, s2, 3);
	
	printf("Conca %s\n", ptr);
	return (0);
}
