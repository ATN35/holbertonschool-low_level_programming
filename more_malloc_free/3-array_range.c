#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - a function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: NULL or a
 */

int *array_range(int min, int max)
{
	int *a;
	int b, c;

	if (min > max)
		return (NULL);
	c = max - min + 1;
	a = malloc(sizeof(int) * c);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < c; b++)
		a[b] = min++;
	return (a);
}
