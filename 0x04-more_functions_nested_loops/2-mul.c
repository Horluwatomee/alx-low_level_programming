#include "main.h"

/**
 * checks for a digit (0 through 9).
 * @c: checks for digits
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (int c >= 0 && int c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
