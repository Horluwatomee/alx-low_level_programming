#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string
 * @s: the string to be printed
 * Print on a new line
 *
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
