#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void_attribute_((constructor))hare(void);

/**
 * hare - prints a statement before execuring the main function
 * function is executed
 */

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
