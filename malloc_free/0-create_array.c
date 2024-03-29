#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size:  the size of the array
 * @c: a character to initialized the array
 * Return: 0 if NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0 || ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
