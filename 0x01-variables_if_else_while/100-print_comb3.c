#include <stdio.h>

/**
 * main - Print all possible combinations of 2 digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int d1;

	int d2;

	for (d1 = 0; d1 <= 9; d1++)
	{
		putchar(d1 + '0');
	for (d2 = 0; d2 <= 9; d2++)
		putchar(d2 + '0');
	if (d1 == 9 && d2 < 9)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
