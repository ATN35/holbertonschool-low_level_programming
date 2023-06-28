#include "main.h"

/**
 * print_triangle - Print a triangle of a given size
 * @size: Triangle size
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)

		_putchar('\n');


	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
