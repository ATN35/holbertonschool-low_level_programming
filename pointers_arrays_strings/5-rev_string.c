#include "main.h"
#include <string.h>

/**
 * rev_string - Invert a string
 * @s: The reversing chain
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
