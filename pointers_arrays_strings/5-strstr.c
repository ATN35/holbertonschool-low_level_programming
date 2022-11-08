#include "main.h"

/**
 * _strstr - a function that locates a substring
 * in the string haystack
 * @haystack: haystack
 * @needle: needle
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *beginning = haystack;
		char *pattern = needle;

		while (*pattern == *haystack && *pattern != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			pattern++;
		}
		if (*pattern == '\0')
			return (beginning);
		haystack = beginning + 1;
	}
	return ('\0');
}
