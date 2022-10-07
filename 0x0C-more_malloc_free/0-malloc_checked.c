#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer to be allocated a memory
 *
 * Return: pointer to the memory allocated
 * or if NULL, exit 98
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
