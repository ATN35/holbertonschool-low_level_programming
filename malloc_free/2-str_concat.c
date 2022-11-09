#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings
 *@s1: s1
 *@s2: s2
 *Return: NULL or s3
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c;
	char *s3;

	a = 0;
	b = 0;
	c = 0;

	s3 = malloc(sizeof(*s1 + *s2));

	if (s3 == NULL)
		return (NULL);

	while (s1[a] != '\0')
	{
		s3[c] = s1[a];
		c++;
		a++;
	}
	while (s2[b] != '\0')
	{
		s3[c] = s2[b];
		c++;
		b++;
	}

	return (s3);
	free(s3);
}
