#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i, j;

	int *a;

	if (min > max)
		return (NULL);
	j = max - (min + 1);
	a = malloc(j * sizeof(int));
		if (a == NULL)
			return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
