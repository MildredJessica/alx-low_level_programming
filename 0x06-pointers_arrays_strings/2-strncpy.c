#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Function that copies a string
 * @dest: Parameter
 * @src: Parameter
 * @n: Parameter
 * Return: String
 */
char *_strncpy(char *dest, char *src, int n)
{
	long int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
