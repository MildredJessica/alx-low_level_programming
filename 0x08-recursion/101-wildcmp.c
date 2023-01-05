#include "main.h"
/**
 * checks_last - Checks last character of s2 when s1 ends
 * @s2: Parameter
 * @j: Parameter
 * Return: 0 or 1
 */
int checks_last(char *s2, int j)
{
	if (s2[j] == '*')
		return (checks_last(s2, j + 1));
	else if (s2[j] == '\0')
		return (1);
	return (0);
}

/**
 * checker - Hepls checker
 * @s1: Parameter
 * @s2: Parameter
 * @i: integer
 * @j: integer
 * @wildcard: integer
 * Return: 1 otherwise 0
 */
int checker(char *s1, char *s2, int i, int j, int wildcard)
{
	if (s1[i] != 0)
	{
		if (s2[j] == '\0')
			return (0);
		else if (s2[j] == '*')
		{
			if (s2[j + 1] == '*')
				return (checker(s1, s2, i, j + 1, j));
			else if (s2[j + 1] == s1[i])
				return (checker(s1, s2, i, j + 1, j));
			else if (s1[i + 1] != s2[j + 1])
				return (checker(s1, s2, i + 1, j, j));
			else if (s1[i + 1] == s2[j + 1])
				return (checker(s1, s2, i + 1, j + 1, j));
		}
		else if ((s1[i] == s2[j]) || (s2[j] == '*' && s2[j + 1] == s1[i + 1]))
			return (checker(s1, s2, i + 1, j + 1, wildcard));
		if (wildcard == -1)
			return (0);
		return (checker(s1, s2, i, wildcard, wildcard));
	}
	if (s2[j] != '\0')
		return (checks_last(s2, j));
	return (1);
}

/**
 * wildcmp - Compares two string
 * @s1: Parameter
 * @s2: Parameter
 * Return: 1 otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0, -1));
}
