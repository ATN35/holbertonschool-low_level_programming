#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: nmemb
 * @size: size
 * Return: NULL or space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);

	if (space == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		space[i] = 0;

	return (space);
}
