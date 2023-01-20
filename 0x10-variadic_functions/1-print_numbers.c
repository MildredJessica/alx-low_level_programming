#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @separator: Separtes the numbers
 * @n: number of argumnents
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int h;

	va_start(list, n);
	for (h = 0; h < n; h++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (h != (n - 1) && separator != 0)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
