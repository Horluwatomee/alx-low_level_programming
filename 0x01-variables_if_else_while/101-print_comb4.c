#include <stdio.h>

/**
 * main - Print a combination of 3 digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int d1;

	int d2;

	int d3;

	for (d1 = 0; d1 != 8; d1++)
	{
		for (d2 = d1 + 1; d2 != 9; d2++)
		{
			d3 = d2 + 1;
			do {
				putchar(d1 + '0');
				putchar(d2 + '0');	
				putchar(d3 + '0');
				if (d1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				d3++;
			} while (d3 != 10);
		}
	}
	putchar('\n');
	return (0);
}
