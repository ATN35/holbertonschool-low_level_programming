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
		putchar("%d", a[i]);

		if (i < n - 1)
			putchar(", ");
	}
	putchar("\n");
}