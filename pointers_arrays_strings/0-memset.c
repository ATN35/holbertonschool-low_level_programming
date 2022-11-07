#include "main.h"

/**
 *_memset - a function that fills memory with a constant byte
 *@s: s
 *@b: b
 *@n: n
 *Return: a

char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (n--)
	{
	*s = b;
	s++;
	}
	return (a);
}
