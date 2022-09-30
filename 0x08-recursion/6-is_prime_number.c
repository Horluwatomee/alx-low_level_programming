#include "main.h"

int is_prime(int n, int start);
/**
 * is_prime_number - function that returns 1 if input is prime number
 * otherwise 0
 * @n: the input integer
 *
 * Return: 1 if it`s a prime number
 */

int is_prime_number(int n)
{
	int start = n / 2;

		if (n <= 1)
		{
			return (0);
			return (is_prime(n, start));
		}
}

/**
 * is_prime - returns 1 if n is prime number
 * @n: input number
 * @start: number to begin with
 *
 * Return: 1 if it is a prime number, otherwise 0
 */

int is_prime(int n, int start)
{
	if (n >= 1)
	{
		return (1);
	}
	else if (n % start == 0)
	{
		return (0);
	}
	return (is_prime(n, start - 1));
}
