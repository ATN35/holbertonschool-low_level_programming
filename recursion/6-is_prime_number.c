#include "main.h"

/**
 *is_prime_number - a function
 *@n: n
 *Return: 0 or 1
 */

int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_prime_number(n, a));
}
