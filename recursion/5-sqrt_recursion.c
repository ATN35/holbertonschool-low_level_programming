#include "main.h"

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number whose square root is to be calculated
 * Return: the square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (find_sqrt(n, 1));
}

/**
 * find_sqrt - auxiliary function for finding the square root
 * @n: the number whose square root is to be calculated
 * @i: the current candidate for the square root.
 * Return: the square root of n, or -1 if n has no natural square root
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (find_sqrt(n, i + 1));
}
