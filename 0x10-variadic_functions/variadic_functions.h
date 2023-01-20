#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct check_format - defines data type
 * @type: the data type
 * @f: Pointer to the function
 */
typedef struct check_format
{
	char *type;
	void (*f)();
}check_format;

void check_char(va_list list);
void check_string(va_list list);
void check_float(va_list list);
void check_int(va_list list);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
