#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to the string of 0 and 1 char
 *
 * Return: converted string or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ui = 0;
	unsigned int len = 1;

	if (!b)
		return (0);

	for (i = 0; b[i];)
		i++;
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		ui += (b[i] - '0') * len;
		len *= 2;
	}
	return (ui);
}
