#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function that compares two strings
 * @s1: The 1st string
 * @s2: The 2nd string to be compared
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
