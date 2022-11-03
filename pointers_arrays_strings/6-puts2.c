#include "main.h"

/**
 *puts2 - a function that prints every other character of a string
 *@str: str
 *return: Nothing
 */

void puts2(char *str)
{
	int i = 0;
	int size = 0;

	while (str[i++])
	{
		size++;
	}
	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
