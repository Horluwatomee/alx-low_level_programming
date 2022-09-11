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

	for (d1 = 0; d1 < 9; d1++)
	{
		d2 = d1 + 1;
	do {
		putchar(d1 + '0');
		putchar(d2 + '0');
		if (d1 < 8)
		{
			putchar(',');
			putchar(' ');
		}
		d2++;
	} while (d2 < 10);
	}
	putchar('\n');
	return (0);
}
