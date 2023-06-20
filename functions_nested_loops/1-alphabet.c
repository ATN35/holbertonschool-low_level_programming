#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}

	_putchar('\n');
}
