#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @*: converts to uppercase
 *
 * Return: 0
 */

char *string_toupper(char *)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		++i;
	}
	return (s[i]);
}
