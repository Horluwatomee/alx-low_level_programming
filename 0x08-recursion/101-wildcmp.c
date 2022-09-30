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
	if (*s2 == '\0')
	{
		return (*s1 == '\0');
	}
	if (*s2 == *s1)
	{
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return ((s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	return (0);
}
