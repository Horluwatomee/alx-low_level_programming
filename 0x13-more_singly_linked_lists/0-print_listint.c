#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes;
	const listint_t *cursor = h;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		num_nodes += 1;
		cursor = cursor->next;
	}
	return (num_nodes);
}
