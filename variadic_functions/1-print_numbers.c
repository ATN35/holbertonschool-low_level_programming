#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers and \n
 * @separator: separator
 * @n: n
 *Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);
	for (b = 0; b < n; b++)

	printf("%d", va_arg(a, unsigned int));
	if (separator != NULL && b < (n - 1))
		printf("%s", separator);

	va_end(a);
	printf("\n");
}
