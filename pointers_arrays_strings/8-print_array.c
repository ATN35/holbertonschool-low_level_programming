#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: The input array of integers
 * @n: The number of elements to print
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int num = a[i];

		if (num < 0)
		{
			num = -num;
			_putchar('-');
		}

		if (num / 10)
			print_number(num / 10);

		_putchar('0' + num % 10);

		if (i < n - 1)
			_putchar(',');
	}
	_putchar('\n');
}
