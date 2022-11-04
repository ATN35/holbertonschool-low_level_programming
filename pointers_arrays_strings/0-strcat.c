#include "main.h"

/**
 *_strcat - une fonction qui concatène deux chaînes de caractères
 *@des: destination
 *@src: source
 *return: Nothing
 */

char *_strcat(char *dest, char *src)
{
	int a, b
	
	for (a = 0; dest[a] != '\0'; a++)
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
