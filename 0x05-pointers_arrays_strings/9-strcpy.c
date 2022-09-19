#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @char *dest: is printed
 * @char *src: points dest
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
