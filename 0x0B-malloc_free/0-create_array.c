#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of array to be initializeed
 * @c: the characters to use to initialize
 *
 * Return: NULL if size = 0, or Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	
	unsigned int i;
	
	if (size == 0)
	{
		return ('\0');
	}
	arr = malloc(size);
	
	if (arr == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
		arr[size] = '\0';
	}
	return (arr);
}
