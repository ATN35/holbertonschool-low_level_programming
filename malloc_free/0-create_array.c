#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - a function
 *@size: size
 *@c: c
 *Return: NULL, b, 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *b;

	b = malloc(size * sizeof(char));

	if (size == 0 || b == NULL)
		return (NULL);

	for (b[a] = c; a < size; a++)
		return (b);

	return (0);
}
