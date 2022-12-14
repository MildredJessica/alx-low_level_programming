#include "main.h"
/**
 * add - Adds two integer
 * @a: Parameter
 * @b: Parameter
 * Adds two a, b
 * Return: Sums a and b
 */
int add(int a, int b)
{
	int sum = a + b;

	_putchar((sum / 10) + '0');
	_putchar((sum % 10) + '0');
	return (0);
}
