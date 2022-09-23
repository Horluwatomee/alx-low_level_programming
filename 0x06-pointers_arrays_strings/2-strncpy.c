#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function to copy a string
 * @dest: the string to be copied
 * @src: the string to be appended
 * @n: the max length of characters copied
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
