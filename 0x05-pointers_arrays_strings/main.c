#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n = 40;
	int *p = &n;

	reset_to_98(p);

	return (0);
}
