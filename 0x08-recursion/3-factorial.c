#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the number that needs to be returned
 * 
 * Return: n!
 */

int factorial(int n)
{
	int next_factorial;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	next_factorial = factorial(n - 1);
	return (n * next_factorial);
}
