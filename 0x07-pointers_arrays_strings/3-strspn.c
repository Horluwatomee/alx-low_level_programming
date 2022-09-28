#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: contains a number of bytes in the initial segment
 * @accept: where the bytes will be copied from
 *
 * Return: n (number of bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 9; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}
	return (0);
}
