#include "main.h"

/**
 * cap_string - function that capitalizese the words in a string
 * @*: capitalize the first word in a string
 *
 * Return: 0
 */

char *cap_string(char *)
{
	char str[MAX] = {0};
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == ' ')
		{
			++1;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}
	return (0);
}
