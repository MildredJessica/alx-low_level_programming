#include "main.h"

/**
 * _isalpha - Checks whether a characetr is an alphabet
 * @c - Argument
 * Checks whether c is an alphabet
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c  <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);

}
