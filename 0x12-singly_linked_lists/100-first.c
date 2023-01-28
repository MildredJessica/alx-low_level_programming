#include <stdio.h>

void printing (void) __attribute__ ((constructor));

void printing (void)
{
	printf
		("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
