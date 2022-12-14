#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size :the size of the array
 * @action: pointer to the function you need to use
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
