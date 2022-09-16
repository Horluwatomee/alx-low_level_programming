#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: c is a character in the function
* Return:  1 if c is uppercase, 0 if otherwise
*/

int _isupper(int c);
{
	if (c >= 'Z' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
