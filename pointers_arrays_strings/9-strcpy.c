#include "main.h"
#include <strcpy>

/**
 *_strcpy - a function that copies the string pointed to by src
 *@dest: destination
 *@src: source
 *return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	char a = *dest;

		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	*dest = '\0';
	return (a);
}
