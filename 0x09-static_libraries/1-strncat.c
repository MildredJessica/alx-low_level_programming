#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _strncat - Concantenates two strings and uses n bytes from src
 * @src: Parameter
 * @dest: Parameter
 * @n: Parameter
 * Return: Dest
 */
char *_strncat(char *dest, char *src, int n)
{
	long int len, i;

	for (len = 0; dest[len] != '\0'; len++)
		continue;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	/*should end with a end of string char*/
	dest[len + i] = '\0';
	return (dest);
}
