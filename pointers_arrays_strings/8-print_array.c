#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: a
 * @n: n
 * return: Nothing
 */
 
 void print_array(int *a, int n)
{
	int i;

	while (i = 0; i < n; i++)
	{
		printf("%d", *a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}

