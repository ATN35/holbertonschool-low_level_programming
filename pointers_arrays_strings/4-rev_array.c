#include "holberton.h"

/**
 * reverse_array - a function that reverse an array
 * @a: a
 * @n: n
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int b;

	while (i < n--)
	{
		b = a[i];
		a[i++] = a[n];
		a[n] = b;
	}
}
