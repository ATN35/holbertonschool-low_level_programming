#include "main.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: destination
 *@src: source
 *Return: this return dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
