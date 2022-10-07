#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array, using malloc
 * @nmemb: array to be allocated a memory
 * @size: bytes size for the memory
 *
 * Return: a pointer to the allocated memory.
 * if nmemb or size is 0 then return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	P = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0
			return (p);
}
