#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @src: Parameter
 * @dest: Parameter
 * Return: A String
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		continue;
	printf("J is %d\n", j);
	i = -1;
	printf("SRC is %c\n", src[i]);
	while (src[i] != '\0')
	{
		printf("I'm inside the while loop");
		i++;
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
