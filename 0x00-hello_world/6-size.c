#include <stdio.h>
/**
 * main - entry point
 * Prints the size of various types on the computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char ch;
	float floatType;
	long  doubleType;
	long int  longType;

	printf("Size of a char: %lu byte(s)\n", sizeof(ch));
	printf("Size of a int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(doubleType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
