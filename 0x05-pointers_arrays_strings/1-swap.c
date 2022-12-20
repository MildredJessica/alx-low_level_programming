#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps a and b
 * @a: Parameter
 * @b: Parameter
 * Returns: Nothing
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	int w = *b;

	*a = w;
	*b = p;
	/**
	 * printf("w is %d\n", w);
	*printf("a = %d, b = %d\n", *a, *b);
	*/
}
