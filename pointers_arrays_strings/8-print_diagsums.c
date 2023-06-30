#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		a += size;
	}
	a -= size;
	for (j = 0; j < size; j++)
	{
		d2 += a[j];
		a -= size;
	}
	printf("%d, %d\n", d1, d2);
}
