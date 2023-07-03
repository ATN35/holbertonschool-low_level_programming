#include "main.h"

/**
 * _pow_recursion - alculates the value of x raised to the power of y
 * @x: Base
 * @y: Exponent
 * Return: Result of x^y or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
