#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
char lowercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase != 'q' && lowercase != 'e')
{
putchar(lowercase);
}
}
putchar('\n');
return (0);
}
