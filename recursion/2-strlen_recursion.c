#include "main.h"
/**
 *_strlen_recursion - a function that returns the length of a string.
 *@s: s
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
