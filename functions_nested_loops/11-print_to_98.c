#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	_putchar(n + '0');

	while (n != 98)
	{
		_putchar(',');
		_putchar(' ');

		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}

		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}

	_putchar('\n');
}
