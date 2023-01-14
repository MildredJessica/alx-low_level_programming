#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 * @src: source of string
 * @n: int type for size of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, a;

	dest_len = strlen(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	return (dest);
}

/**
 * str_concat - Concats two string
 * @s1: String1
 * @s2: String2
 * Return: Concatenates the two string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size =  strlen(s1) + strlen(s2) + 1;
	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	_strncat(str, s1, strlen(s1));
	_strncat(str, s2, strlen(s2));
	str += '\0';
	return (str);
}
