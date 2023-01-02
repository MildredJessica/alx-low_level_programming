#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];

	return (dest);
}
