#include "main.h"

/**
 * reverse_array - function that reverses the content of an array in integers
 * @q: The array
 * @n: number of intergers of the array
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int a[n] = {i, j, k, l, m};

	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];

		a[i] = a[n - i - 1];

		a[n -i - 1] = temp;

	}
	for (int i = 0; i < n; i++)
	{
		a[i];
	}
}
