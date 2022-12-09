#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Prints exactly and that piece of art is useful \" - Dora Korpar,
 * 2015-10-19 including an error
 * Return: Always 0 (Success)
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-199\n";
	write(STDOUT_FILENO, msg , 59);
	return (1);
}
