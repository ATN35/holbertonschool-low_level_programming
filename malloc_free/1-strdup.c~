#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function
 * @str: string
 * Return: NULL or dup
 */

char *_strdup(char *str)
{
	char *dup;
	int a, b;
	a = 0;
	b = 0;

	dup = malloc(sizeof(str));

	while (str[a] != '\0')
	{
		a++;
		b++;
	}

	if (dup == NULL)
		return (NULL);

	while (str[a] != '\0')
	{
		dup[a] = str[a];
		a++;
	}

	return (dup);
}
