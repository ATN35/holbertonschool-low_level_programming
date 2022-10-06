#include <stdio.h>
/**
*main - Print the alphabet
*
*Return:return 0
*/
int main(void)
{
char a[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0 ; i < 26 ; i++)
{
putchar(a[i]);
}
putchar('\n');
return (0);
}
