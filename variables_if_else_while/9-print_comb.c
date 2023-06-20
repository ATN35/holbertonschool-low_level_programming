#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
if (i != 9)
}
putchar('\n');

return (0);
}
