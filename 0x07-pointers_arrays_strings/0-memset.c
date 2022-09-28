#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: Constant byte size to be copied
 * @n: integer
 *
 * Result: s (pointer to the memory area)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
