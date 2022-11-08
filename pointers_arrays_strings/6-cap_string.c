#include "main.h"

/**
 *leet - a function that encodes a string into 1337
 *@str: str
 *Return: Nothing
 */

char *leet(char *str)
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
