#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
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

	return (0);
}
