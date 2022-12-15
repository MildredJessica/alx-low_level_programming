#include "main.h"
/**
 *_islower - Entry point
 *@c: Parameter
 *checks if c a character is lowercase
 * Return: 1 if c is int otherwise 0
 */
int _islower(int c)
{
	if ((c > 96) && (c  <= 122))
	{
		return (1);
	}
	return (0);
}
