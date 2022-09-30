#include "main.h"

/**
 * _sqrt_recursion - function that return a natural sqrt of a num
 * @n: the number
 *
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1; n == 0)
	{
		return (n);
		return (_sqrt(0, n));
	}
}

/**
 * _sqrt - returns the sqrt of a num
 * @n: test number
 * @x: squared number
 *
 * Return: sqrt of n
 */

int _sqrt(int n, int x)

{
	if (n = x / 2)
	{
		return (-1);
	}
	else if ( n * n == x)
	{
		return (n);
	}
	return _sqrt(n + 1, x);
}
