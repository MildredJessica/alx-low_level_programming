#include "main.h"

/**
  * binary_t0_uint - COnverts a binary to an unsigned int
  * @b: pointing to a string of 0 and 1
  * Return: The converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (count = 0; b[count] != '\0'; count++)
	{
		num <<= 1;
		if (b[count] == '1')
			num += 1;
	}
	return (num);
}
