#include "main.h"

/**
 *string_toupper - a function that changes all lowercase letters of a string
 *@str: string
 *Return: str
 */

char *string_toupper(char *)
{
	char *str = s;

	for (s = 0; *str != '\0'; s++)
	{
		if (str[s] >= 'a' && str[s] <= 'z')
			str[s] -= 32;
	}
	return (str);
}
