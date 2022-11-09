#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: NULL or s3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3, *s4;
	unsigned int a, b;

	s4 = "";
	if (s1 == NULL)
		s1 = s4;
	if (s2 == NULL)
		s2 = s4;
	for (a = 0; s1[a] != '\0'; a++)
		;
	s3 = malloc((a + (n * sizeof(*s2) + 1) * sizeof(*s3)));
	if (s3 == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		s3[a] = s1[a];
	for (b = 0; s2[b] != '\0' && b < n; b++, a++)
		s3[a] = s2[b];
	s3[a] = '\0';
	return (s3);
}
