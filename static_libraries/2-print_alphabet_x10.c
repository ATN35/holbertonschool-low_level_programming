#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int lowercase = 'a';

		while (lowercase <= 'z')
		{
			_putchar(lowercase);
			lowercase++;
		}

		_putchar('\n');
		i++;
	}
}
