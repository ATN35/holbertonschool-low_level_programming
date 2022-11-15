#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: n
 * Return: 0 or b
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int a;
	int b = 0;

	if (n == 0)
		return (0);
	va_start(sum, n);

	for (a = 0; a < n; a++)
		b += va_arg(sum, int);
	va_end(sum);

	return (b);

}
