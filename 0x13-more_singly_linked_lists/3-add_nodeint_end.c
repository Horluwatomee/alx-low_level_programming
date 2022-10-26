#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end 
 * of a listint_t list
 * @head: head of the listint_t list
 * @n: new node to be added at the end of the list
 * 
 * Return: the address of the new element, or NULL if it failed 
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end, *temp;

	if (!head)
		return (0);

	new_end = malloc(sizeof(listint_t));
	
	if (new_end == NULL)
		return (0);
	new_end->n = n;
	new_end->next = NULL;

	if (*head != NULL)
	{
		temp = (*head);
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_end;
		return (temp->next);
	}
	*head = new_end;
	return (*head);
}
