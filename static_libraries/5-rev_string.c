#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Invert a string
 * @s: The reversing chain
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
