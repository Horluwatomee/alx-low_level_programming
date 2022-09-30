#include "main.h"

/**
 * _strlen_recursion - function that returns the len of a string
 * @s: the string whose length is to be returned
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
