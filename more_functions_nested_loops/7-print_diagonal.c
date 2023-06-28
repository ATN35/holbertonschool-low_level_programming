#include "main.h"

/**
 * print_diagonal - Prints a diagonal line in the terminal
 * @n: The number of times to print the '\' character
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)

		_putchar('\n');

	else
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
