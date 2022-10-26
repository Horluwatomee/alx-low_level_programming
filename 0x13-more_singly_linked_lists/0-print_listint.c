#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: head of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes;

	if (h == NULL)
		return (0);

	if (h != NULL)
		printf("%d/n", h->n);

	num_nodes = (print_listint(h->next) + 1);
	return (num_nodes);
}
