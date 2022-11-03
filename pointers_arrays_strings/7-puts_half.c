#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: str
 * return: Nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int size = 0;
	int n;

	while (str[i++])
	{
		size++;
	}
	if ((size % 2) == 0)
		n = size / 2;

	else
		n = (size - 1) / 2;

	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
