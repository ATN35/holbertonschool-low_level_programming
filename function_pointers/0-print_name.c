#include "function_pointers.h"

/**
 * print_name - function that print name
 * @f: function pointer
 * @name: name to print
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
