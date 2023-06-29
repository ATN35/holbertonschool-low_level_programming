#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half a string
 * @str: The input string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}
