#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - a function that prints strings, followed by a new line
 *@separator: represents the separator between the numbers
 *@n: n
 *Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int a;
	char *b;

	va_start(str, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(str, char *);
		if (b != NULL)
			printf("%s", b);
		else
			printf("(nil)");
		if (separator != NULL && a != (n - 1))
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}
