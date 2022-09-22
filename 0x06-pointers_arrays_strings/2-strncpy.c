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
	for (i = 0; dest[i] != '\0'; ++i)
	{
		 src[i] = dest[i];
	}
	src[i] = '\0';
	return (0);
}
