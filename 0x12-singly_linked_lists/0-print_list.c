#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list - function that prints all elements in a list
 * @h: head of the struct
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	if (h == NULL)
		return (0);
	if (h->str)
		printf("[%u] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	return (1 + print_list(h->next));
}
