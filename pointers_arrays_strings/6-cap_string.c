#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: an input string to capitalize letters
 * Return: pointer to s
 */
char *cap_string(char *str)
{
	int n = 0, i;
	char sep[] = {' ', '\n', '\t', ',', ';', '.', '!', '?',
		      '"', '(', ')', '{', '}' };
	int ifsep = 13;

	while (str[n])
	{
		i = 0;
		while (i < ifsep)
		{
			if ((n == 0 || str[n - 1] ==
			     sep[i]) && (str[n] >= 97 && str[n] <= 122))
			{
				str[n] -= 32;
			}
			i++;
		}
		n++;
	}
	return (str);
}
