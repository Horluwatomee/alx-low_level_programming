#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *leet(char *s)
{
	 int i, j;

	 int a[11] = {'a','A','e','E','o','O','t','T','l','L'};

	 int b[11] = {'4','4','3','3','0','0','7','7','1'};

	 for (i = 0; s[i] != '\0'; i++)
	 {
		 for (j = 0; j < 10; j++)
		 {
			 if (s[i] == a[j])
			 {
				 s[i] = b[j];
			 }
		 }
	 }
	 return (s);
}
