#include <stdio.h>

/**
 * main - Prints the lower case alphabets in the reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
	char abc;

	for (abc = "z"; abc >= "a"; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
