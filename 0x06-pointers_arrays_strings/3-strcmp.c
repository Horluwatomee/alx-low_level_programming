#include "main.h"

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

	for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
	continue;

	if (s1[i] < s2[i])
	{
		s1 < s2;
	}
	else if (s1[i] > s2[i])
	{
		s1 > s2;
	}
	else
	{
		s1 = s2;
	}
	return (0);
}
