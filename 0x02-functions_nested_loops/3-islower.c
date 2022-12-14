#include "main.h"
/**
 *_islower - Entry point
 *@c: Parameter
 *checks if c a character is lowercase
 * Return: 1 if c is int otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
