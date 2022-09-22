#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: the string to be copied
 * @src: the string to be appended
 * @n: the max length of characters copied
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest = '\0';
		i++;
	}

	return (dest);
}
