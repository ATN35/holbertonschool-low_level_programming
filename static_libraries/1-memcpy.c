#include "main.h"
#include <stddef.h>

/**
 * _memcpy - a function that copys memory area
 * @dest: memory area destination to copy
 * @src: memory area source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *xdest = (char *)dest;
	const char *xsrc = (const char *)src;

	if ((xdest != NULL) && (xsrc != NULL))
	{
		while (n)
		{
			*(xdest++) = *(xsrc++);
			--n;
		}
	}
	return (dest);
}
