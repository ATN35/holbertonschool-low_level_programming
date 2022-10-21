#include "main.h"

/**
 *_print_rev_recursion -  a function that prints a string in reverse
 *@s: s
 *Return: Always 0
 */

void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
		return;
	}
}
