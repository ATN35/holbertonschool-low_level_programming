#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
