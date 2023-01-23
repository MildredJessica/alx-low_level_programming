#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints the name
 * @name: String
 * @f: pointer to a function that takes a pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
