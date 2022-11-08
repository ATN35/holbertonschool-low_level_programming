#include "main.h"
#include <stdio.h>

/**
 *strspn - returns number of bytes in the initial sengment s
 *@s: s
 *@accept: accept
 *Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i, a, b;

	i = 0;
	while (s[i] != '\0')
	{
		b = 0;
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
				b = 1;
		}
		a = 0;
		if (b == 0)
			break;
		num++;
		i++;
	}
	return (i);
}
