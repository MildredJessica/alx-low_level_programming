#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - REturns the sum of all its parameters
 * @n: Number of arguments
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int k;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (k = 0; k < n; k++)
		sum += va_arg(list, unsigned int);

	va_end(list);
	return (sum);
}
