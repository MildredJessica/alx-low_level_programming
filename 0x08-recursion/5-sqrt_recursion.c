#include "main.h"

/**
 * sqrt_helper - Returns the square root of a number
 * @k: Parameter
 * @i: Parameter
 * Return: i
 */
int sqrt_helper(int k, int i)
{
	if (i * i > k)
		return (-1);
	if (i * i == k)
		return (i);
	else
		return (sqrt_helper(k, i + 1));
}

/**
 * _sqrt_recursion - Returns the square root of a natural number
 * @n: Parameter
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_helper(n, 1));
}
