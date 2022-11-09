#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - a function
 *@width: width
 *@height: height
 *Return: NULL or a
 */

int **alloc_grid(int width, int height)
{
	int **a, b = 0, c = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for ( ; b < height; b++)
	{
		a[b] = (int *)malloc(sizeof(int) * width);
		if (a[b] == NULL)
			return (NULL);
	}

	for (b = 0; b < height; b++)
		for ( ; c < width; c++)
			a[b][c] = 0;
	return (a);
}

