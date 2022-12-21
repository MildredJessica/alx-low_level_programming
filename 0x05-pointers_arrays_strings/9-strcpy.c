#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copies the str pointed by src to the string pointed by dest
 * @src: Parameter
 * @dest: Parameter
 * Return: A string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = strcpy(dest, src);
	return (ptr);
}
