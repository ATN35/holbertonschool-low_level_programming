#include "main.h"

/**
 *_strchr - a function that locates a character in a string
 *@s: s
 *@c: c
 *Return: s or '/0'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		s++;
			return (s);
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
