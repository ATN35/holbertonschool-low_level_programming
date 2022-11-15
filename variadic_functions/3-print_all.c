#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function prints anyting
 * @format: format
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list a;
	char *b;
	int i = 0;

	va_start(a, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(a, int));
			break;
		case 'i':
			printf("%d", va_arg(a, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(a, double));
			break;
		case 's':
			b = va_arg(a, char*);
			if (b != NULL)
			{
			printf("%s", b);
			break;

			printf("(nil)");
			break;
			}
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(a);
	printf("\n");
}
