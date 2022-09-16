#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		char i, j, k;

		for (i = 1; i <= size; i++)

			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= i; j++)
				
				for (k = j; k <= size; k++)
				{
					_putchar(" ");
				}
			for (k <= 0; k < size; k++)
			{
				_putchar("#");
			}
			_putchar('\n');
	}
}
