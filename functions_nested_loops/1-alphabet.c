#include "main.h"

/**
 *
 * print_alphabet - Imprime l'alphabet en minuscules
 *
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
