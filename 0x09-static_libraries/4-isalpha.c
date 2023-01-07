#include "main.h"

/**
 * _isalpha - Checks whether a characetr is an alphabet
 * @c: Parameter
 * Checks whether c is an alphabet
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c  <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
