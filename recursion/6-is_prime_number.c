#include "main.h"

/**
 * primerec - recursive auxiliary function to check whether a number is prime
 * @a: number to check
 * @b: potential divisor
 * Return: 1 if the number is prime, 0 otherwise
 */
int primerec(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (primerec(a, b + 1));
}

/**
 * is_prime_number - checks whether a number is prime
 * @n: number to check
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primerec(n, 2));
}
