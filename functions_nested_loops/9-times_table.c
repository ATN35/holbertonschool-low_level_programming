#include "main"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void);
{
int i = 0;
while (i <= 9)
{
int j = 0;

while (j <= 9)
{
int result = i * j;

if (result <= 9)
{
_putchar(' ');
_putchar(result + '0');
}

else if (result > 9)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}

if (j != 9)
{
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;
}
}
