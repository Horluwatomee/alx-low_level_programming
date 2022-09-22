#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates 2 strings
 * @dest: The string that will be appended
 * @src: the string from which n characters will append
 * @n: max number of characters to be appended
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; ++i);

	for (n = 0; src[n] != n; ++n, ++i)
	{
		dest[i] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
