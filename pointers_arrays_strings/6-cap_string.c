#include "main.h"

/**
 *leet - a function
 *@str: str
 *Return: Nothing
 */

char *cap_string(char *str)
{
	int a = 0, b;
	char d1[13] = {' ', '\n', '\t', ',', ';', '.', '!', '?',
		      '"', '(', ')', '{', '}' };
	int d2 = 13;

	while (str[a])
	{
		b = 0;
		while (b < d2)
		{
			if ((a == 0 || str[a - 1] == d1[b]) && (str[a] >= 97 && str[a] <= 122))
			{
				str[a] -= 32;
			}
			b++;
		}
		a++;
	}
	return (0);
}
