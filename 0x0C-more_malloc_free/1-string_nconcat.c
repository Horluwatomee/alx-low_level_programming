#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to be copied
 * @s2: second string to be copied
 * @n: amount of bytes allocated to the memory
 *
 * Return: s pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int ts1, ts2, ts, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (ts1 = 0; s1[ts1] != '\0'; ts1++)
		;
	for (ts2 = 0; s2[ts2] != '\0'; ts2++)
		;

	if (n > ts2)
		n = ts2;

	ts = ts1 + n;

	s = malloc(ts + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ts; i++)
		if (i < ts1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[i - ts1];
			s[i] = '\0';
		}

	return (s);
}
