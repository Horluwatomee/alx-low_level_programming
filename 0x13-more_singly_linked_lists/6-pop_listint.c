#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list,
 * and returns the head node’s data (n).
 * @head: head of the structure
 *
 * Return: 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	/*Assign the temp reference*/

	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
