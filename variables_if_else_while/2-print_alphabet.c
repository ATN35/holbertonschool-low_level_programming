#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
char lowercase = 'a';

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
putchar('\n');

return (0);
}
