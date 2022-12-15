#include "main.h"
#define NULL 0

/**
 * _strchr - function that locates a character in a string.
 * @s: the string
 * @c: the character to be copied
 *
 * Return: pointer to the first character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
