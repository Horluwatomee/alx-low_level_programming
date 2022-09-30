#include "main.h"

/**
 * is_palindrome - function that returns 1 if string is palindrome
 * otherwise 0
 * @s: the string being identified
 *
 * Return: 1 if string is a palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int flag = 1

		check (s, 0, _strlen_recursion(s) - 1 &flag);
	return (flag);
}

/**
 * checkm- checks if string is a palindrome
 * @s: string to be checked
 * @start: start index
 * @end: end index
 * @flag:flag to indicate if a string is a palindrome
 *
 * Return: void
 */

void check(char *s, int start, int start,int end, int *flaf)
{
	if (start <= end)
	{
		if (s[start] == s[end])
		{
			*flag *= i;
		}
		else 
		{
			*flag *= 0;
		}
		check(s, start + 1, end - 1, flag);
	}
	
}

/**
 * _strlen_recursion - calculates the length of a string
 * @s: the string 
 *
 * Return: length of the string
 */

int_strlen_recursion(char *s)
{
	int len = 0;
	
	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
