#include "main.h"

/**
 * reverse_array - function that reverses the content of an array in integer
 * @a: The array to be reversed
 * @n: number of intergers of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, k, tmp;

	k = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];

		a[i] = a[k];

		a[k--] = tmp;
	}
}
