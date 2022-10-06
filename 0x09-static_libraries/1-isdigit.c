#include "main.h"

/**
 * _isdigit - funtion that returns 0 to 9 digits
 * @c: int to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
