#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: Parameter
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
