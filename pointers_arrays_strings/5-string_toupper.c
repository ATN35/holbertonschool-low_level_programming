#include "main.h"

/**
 * string_toupper - transforms all lowercase letters into uppercase letters
 * @s: an input string
 *
 * Return: char pointer to converted string
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
