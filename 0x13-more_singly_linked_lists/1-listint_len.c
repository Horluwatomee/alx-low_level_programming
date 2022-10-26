#include "lists.h"

/**
 * listint_len -  function that returns the number of elements
 * in a linked listint_t list.
 * @h: pointer to the first node
 *
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elements;

	if (h == NULL)
		return (0);

	num_elements = (listint_len(h->next) + 1);
	return (num_elements);
}
