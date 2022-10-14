#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Locates a character in a string;
 * @s: Type Char pointer;
 * @c: Type Char memory area;
 * Return: NULL;
 */

char *_strchr(char *s, char c)
{
	char *isCharFind = NULL;

	if (s != NULL)
	{
		do {
			if (*s == (char) c)
			{
				isCharFind = s;
				break;
			}
		} while (*s++);
	}
	return (isCharFind);
}
