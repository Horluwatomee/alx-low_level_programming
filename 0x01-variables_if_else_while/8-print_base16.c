#include <stdio.h>

/**
 * main - Prints numbers in base 16
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	if (num < 10)
	{
		putchar('0' + num);
	}
	else
	{
		putchar(87 + num);
	}
	putchar('\n');
	return (0);
}
