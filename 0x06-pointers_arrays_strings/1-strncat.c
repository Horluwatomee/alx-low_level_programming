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
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		continue;

	for (j = 0; src[j] != src[n]; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
