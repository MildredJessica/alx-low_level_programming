#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * countWords - Counts the number of words
 * @str: Array of String
 * Return: number of words
 */

int countWords(char *str)
{
	int i = 0, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				str++;
			count++;
		}
	}
	return (count);
}

/**
 * free_them - fress memory allocated
 * @str: Array
 * @i: counter
 * Return: Nothing
 */
void free_them(char **str, int i)
{
	for (; i > 0;)
		free(str[--i]);
	free(str);
}

/**
 * strtow - Splits a string into words
 * @str: Array
 * Return: Returns a pointer to an array of string
 */
char **strtow(char *str)
{
	char **arr, *wordsfound;
	int count_words = 0;
	int i, j, k = 0;

	if (str == 0 || *str == 0)
		return (NULL);
	count_words = countWords(str);
	if (count_words == 0)
		return (NULL);

	arr = malloc(sizeof(char) * (count_words + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; *str != '\0' && i < count_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			wordsfound = str;
			for (j = 0; *str != ' ' && *str != '\0';)
			{
				j++;
				str++;
			}
			arr[i] = malloc((j+1) * sizeof(char));
			if (arr[i] == 0)
			{
				free_them(arr, i);
				return (NULL);
			}
			while (*wordsfound != ' ' && *wordsfound != '\0')
			{
				arr[i][k] = *wordsfound;
				wordsfound++;
				k++;
			}
			arr[i][k] = '\0';
			i++;
			k = 0;
			j = 0;
			str++;
		}
	}
	return (arr);

}
