#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * check_char - Checks for characters
 * @list: Argument passed
 * Return: Nothing
 */
void check_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * check_string - Checks for string and prints them
 * @list: Argument passed
 * Retun: Nothing
 */
void check_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == 0)
		str = "(nil)";
	printf("%s", str);
}

/**
 * check_int - Checks and prints integer
 * @list: Argument passed
 * Return: Nothing
 */
void check_int(va_list list)
{
	printf("%d", va_arg(list, int));
}


/**
 * check_float - Checks and prints floats
 * @list: Argument passed
 * Return: Nothing
 */
void check_float(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_all - Prints anything
 * @format: Constant char agument
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *str = "";
	int i = 0, j;

	check_format check[] = {
		{"c", check_char},
		{"i", check_int},
		{"f", check_float},
		{"s", check_string},
		{NULL, NULL}
	};
	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (check[j].type != NULL)
		{
			if (format[i] == check[j].type[0])
			{
				printf("%s", str);
				check[j].f(list);
				str = ",";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);

}
