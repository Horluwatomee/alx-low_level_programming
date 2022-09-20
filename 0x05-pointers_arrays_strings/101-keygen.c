#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates randon vlues for 101 crackme
 * @[]: random values
 *
 * Return: passwords
 */
int main(void)
{
	int r = 0;
	int c = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
