#include "main.h"

/**
 * sqrtrec - recursive auxiliary function to find the square root
 * @x: value for which to find the square root
 * @y: current value of the square root to test
 * Return: the square root of x if it exists, -1 otherwise
 */
int sqrtrec(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrtrec(x, y + 1));
}

/**
 * _sqrt_recursion - computes the square root of a number
 * @n: number for which to calculate the square root
 * Return: the square root of n if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (sqrtrec(n, 1));
}
