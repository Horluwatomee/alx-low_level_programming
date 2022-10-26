#include "lists.h"

/**
 * free_listint - function that frees the listint_t list
 * @head: head of the listint_t list
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	/*free one node at a time*/
	free_listint(head->next);

	/*free the list*/
	free(head);
	return (0);
}
