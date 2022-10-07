#include "main.h"

/**
 * _abs - azer
 * @x: x
 * Return: return 0
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (x * (-1));
	}
	else if (x > 0)
	{
		return (x * 1);
	}
	else
	{
		return (x);
	}
	return (0);
}
