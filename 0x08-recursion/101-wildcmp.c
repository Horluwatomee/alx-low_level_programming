#include "main.h"

/**
 * wildcmp - function that compares 2 strings and returns 1 if identical
 * otherwise returns 0
 * @s1: the first string
 * @s2: the second string with the special char *
 *
 * Return: 1 if identical, 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
