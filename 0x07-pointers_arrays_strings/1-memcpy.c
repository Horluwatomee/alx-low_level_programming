#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: the memory area to contain the final result
 * @src: the memory to be copied
 * @n: the number of bytes
 *
 * Result: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
