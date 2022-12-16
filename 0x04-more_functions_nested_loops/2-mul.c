#include "main.h"

/**
 * mul - Multiplies two digits
 * @a: Parameter
 * @b: Parameter
 * Multiplies a and b
 * Return: An integer
 */
int mul(int a, int b)
{
	int result;

	if (a < 0)
	{
		if (b < 0)
			result = a * b;
		else
			result = -1 * (a * b);
	}
	else
		result = a * b;

	return (result);
}
