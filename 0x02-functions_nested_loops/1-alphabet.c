#include <stdio.h>

/**
 * main - Prints alphabets in lowercase
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}

