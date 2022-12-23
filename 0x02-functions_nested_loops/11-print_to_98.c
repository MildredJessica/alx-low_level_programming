#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
				n *= -1;
				_putchar('-');
				insert_num(n);
				n *= -1;
			}
			else
				insert_num(n);
			n++;
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			insert_num(n);
		}
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');

}

/**
 * insert_num - takes in a num and puts the modular or division of the number
 * @num: Parameter
 * Return: void
 */
void insert_num(int n)
{
	if ((n / 10) > 9)
	{
		int k = n / 10;

		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	} else if ((n / 10) > 0  && (n / 10) <= 9)
		_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	_putchar(',');
}
