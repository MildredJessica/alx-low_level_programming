#include "main.h"

/**
 * prime_number_helper - Checks if a number is prime
 * @l : Parameter
 * @s: Parameter
 * Return: 1 otherwise 0
 */
int prime_number_helper(int l, int s)
{
	if ((l % s == 0) && (l != s))
		return (0);
	else if (l == s)
		return (1);
	else if (l > s)
		return (prime_number_helper(l, s + 1));

	return (1);
}

/**
 * is_prime_number - Returns 1 if n is a prime number
 * @n: Parameter
 * Return: 1 otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number_helper(n, 2));
}

