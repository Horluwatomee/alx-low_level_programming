#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates 2 strings of char *dest and *src
 * @dest: pointer of dest string
 * @src: pointer of src string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		continue;

	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
