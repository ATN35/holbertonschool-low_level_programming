#include "main.h"

/**
 *string_toupper - a function that changes all lowercase letters of a string
 *@str: string
 *Return: str
 */

char *string_toupper(char *)
{
	char *str = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (str);
}
