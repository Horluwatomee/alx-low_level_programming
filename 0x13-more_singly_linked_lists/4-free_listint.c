#include "lists.h"

/**
 * free_listint - function that frees the listint_t list
 * @head: head of the listint_t list
 *
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	/*free one node at a time*/
	free_listint(head->next);

	/*free the list*/
	free(head);
}
