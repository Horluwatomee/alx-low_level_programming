#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer to be allocated a memory
 *
 * Returns: pointer to the memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
