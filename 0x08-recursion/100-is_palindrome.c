#include "main.h"

/**
 * _strlen_recursion - function that returns 1 if string is palindrome
 * otherwise 0
 * @s: the string being identified
 *
 * Return: 1 if string is a palindrome, 0 if otherwise
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - checks if string is a palindrome
 * @s: string to be checked
 * @l: position
 *
 * Return: void
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}
	if (*s == *(s + l))
	{
		return (p1(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - identifies palindrome
 * @s: the string
 *
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
