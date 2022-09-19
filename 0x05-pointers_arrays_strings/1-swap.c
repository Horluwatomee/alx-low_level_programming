#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: swap for b
 * @b: swap for a
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int a;

	int b;

	int swap;

	swap = *a;

	*a = *b;

	*b = swap;
}
