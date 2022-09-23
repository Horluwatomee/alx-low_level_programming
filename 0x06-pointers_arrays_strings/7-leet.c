#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337.
 * Replace letters a and A by 4
 * Replace letters e and E by 3
 * Replace letters o and O by 0
 * Replace letters t and T by 7
 * Replace letters l and L by 1
 * @*: converts original string into 43071
 *
 * Return: 0
 */

char *leet(char *)
{
	 int i = 0;

	 while (str[i] != '\0')
	 {
		 str[i] = str[i] - 30;
		 i++;
	 }
	 return (str);
}
