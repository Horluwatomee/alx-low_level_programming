#include "main.h"

int natural_sqrt(int n, int x);

/**
 * _sqrt_recursion - function that return a natural sqrt of a num
 * @n: the number
 *
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
		return (natural_sqrt(0, n));
}

/**
 * natural_sqrt - recurses the sqrt of a num
 * @n: test number
 * @x: squared number
 *
 * Return: sqrt of n
 */

int natural_sqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	return (natural_sqrt(n, x + 1));
}
