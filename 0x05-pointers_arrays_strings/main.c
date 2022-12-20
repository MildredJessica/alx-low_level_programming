#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n = 40;
	int k  = 49;
	int *p = &n;
	int *y = &k;


	/*reset_to_98(p);*/
	swap_int(y, p);

	return (0);
}
