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
	int head_value = 0;

		if (head)
			temp = *head;
	/*Assign the temp reference*/

	if (temp)
	{
		head_value = (*head)->n;
		*head = (*head)->next;
		free(temp);
	}
	return (head_value);
}
