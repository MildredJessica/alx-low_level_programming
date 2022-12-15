#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - Print numbers from n to 98
 * @n: Parameter
 * Prints numbers from n to 98
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n != 98)
		{
			if (n < 0)
			{
				n = abs(n);
				_putchar('-');
			}
			if ((n / 10) > 0)
			{
				if (n > 99)
				{
					_putchar((n / 10) + '0');
				}
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	} else if (n > 98)
	{
		while (n != 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');

}
