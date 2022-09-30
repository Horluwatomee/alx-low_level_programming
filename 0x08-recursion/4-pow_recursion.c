#include "main.h"

/**
 * _pow_recursion - function that returns the value of x^y
 * @x: the base value
 * @y: the power value
 *
 * Return: the value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
