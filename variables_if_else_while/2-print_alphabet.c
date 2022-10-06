#include <stdio.h>

/**
 * Main - We use the function putchar for generate an alphabet in lowercase
 *
 * Return : We got alphabet in lower case !
 */

int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	init i;

	for (i = 0 ; i < 26 ; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0)
		
