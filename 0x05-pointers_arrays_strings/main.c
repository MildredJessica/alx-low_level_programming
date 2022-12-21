#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	/**
	 * int n = 40;
	int k  = 49;
	int *p = &n;
	int *y = &k;
	*/
	char *s;

	s = "Hello World";


	/**
	 * reset_to_98(p);
	swap_int(y, p);:
	printf("String length is %d\n", _strlen(s))
	_puts(s);
	print_rev(s);
	*/
	rev_string(s);
	printf("New String is %s", s);

	return (0);
}
