#include "main.h"
#include <string.h>

/**
 * _palindrome_Finder - Return the palindrome of a string
 * @s: Parameter
 * @length: Parameter
 * @i: Parameter
 * Return: 1 or 0
 */
int _palindrome_Finder(char *s, int length, int i)
{
	if (s[i] != s[length])
		return (0);
	if ((i < length) && (s[i] == s[length]))
		return _palindrome_Finder(s, length - 1, i + 1);
	return (1);
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Parameter
 * Return: 1 otherwise 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = strlen(s);

	return (_palindrome_Finder(s, length - 1, i));
}
