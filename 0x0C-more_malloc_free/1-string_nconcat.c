#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * string_nconcat - Concats two string
 * @s1: first string
 * @s2: secong string
 * @n: size
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, count, count1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n > len2)
		ptr = malloc((len1 + len2  + 1) * sizeof(char));
	else
		ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == 0)
		return (NULL);

	for (count1 = 0; count1 < len1; count1++)
		ptr[count1] = s1[count1];
	for (count2 = 0; count2 < n && count2 < len2; count2++, count1++)
		ptr[count1] = s2[count2];
	ptr[count1] = '\0';
	return (ptr);
}
