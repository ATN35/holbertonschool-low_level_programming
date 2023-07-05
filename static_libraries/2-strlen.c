#include "main.h"

/**
 * _strlen -  Calculates the length of a character string
 * @s: Pointer to character string
 *
 * Return: Chain length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
