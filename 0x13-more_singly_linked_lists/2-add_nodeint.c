#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list.
 * @head: head of the listint_t list
 * @n: new node to be added
 *
 * Return:  address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (*head);
}
