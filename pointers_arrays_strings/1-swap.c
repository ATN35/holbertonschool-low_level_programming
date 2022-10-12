#include "main.h"

/**
 * swap_int - entry point
 *
 * @a: swap to b
 * @b: swap to a
 *
 * Return: Always O.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
