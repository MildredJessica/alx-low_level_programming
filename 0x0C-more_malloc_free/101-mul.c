#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * stringtoint - convert a string to an integer.
 * @str: char type string
 * Return: integer converted
 */

int stringtoint(const char *str)
{
	int sign = 1;
	unsigned long int resp = 0, num, i;

	for (num = 0; !(str[num] >= 48 && str[num] <= 57); num++)
	{
		if (str[num] == '-')
		{
			sign *= -1;
		}
	}

	for (i = num; str[i] >= 48 && str[i] <= 57; i++)
	{
		resp *= 10;
		resp += (str[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */
void print_int(unsigned long int n)
{
	unsigned  long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
		;
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
 * main - multiplies two numbers
 * @argc: number pf argumnets
 * @argv: Array of pointer
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		exit(98);
	}
	print_int(stringtoint(argv[1]) * stringtoint(argv[2]));
	_putchar('\n');
	return (0);
}
