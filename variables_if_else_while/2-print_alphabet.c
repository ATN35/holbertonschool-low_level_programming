#include <stdio.h>
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
