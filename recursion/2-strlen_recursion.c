#include "main.h"

/**
 * _strlen_recursion - returns the length of a character string
 * @s: pointer to the character string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
