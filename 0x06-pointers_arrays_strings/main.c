#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char *s = "Hell0 ";
	char *y = "World";
	char *ptr;

	/**
	 * s = _strcat(s, y);
	 */
	ptr = _strncat(s, y, 3);
	printf("Conca %s\n", ptr);
	return (0);
}
