#include "main.h"
#include <stddef.h>

/**
 * _memcpy - entry point
 * @dest: destination
 * @src: source
 * @n: n
 * Return: a
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (a);
}
