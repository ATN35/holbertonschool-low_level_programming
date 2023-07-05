#include "main.h"

/**
 * _puts - Displays a character string followed by a new line
 * @str:  Pointer to the string to be displayed
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
