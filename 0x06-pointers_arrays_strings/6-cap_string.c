#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string- Capitalises every word in a string
 * @str: string
 * Return: String
 */
char *cap_string(char *str)
{
	long int i, j = 0;
	char sep[12] = {' ', ',', '.', ';', '!', '?', '"', '(', ')', '}', '{', ','};

	for (; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			continue;
		}
		for (; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				++i;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
					break;
				}
			} else
			{
				if (str[i] == 'A' && str[i] == 'Z')
				{
					str[i] = str[i] + 32;
					break;
				}

			}
		}
	}
	return (str);
}
