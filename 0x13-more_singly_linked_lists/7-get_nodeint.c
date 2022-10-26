#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: head of a struct
 * @index: index of the node, starting at 0
 *
 * Return: NULL, if the node does not exist or nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/*iterate through the nodes till the nth node*/
	for (i = 0; i < index && head != NULL; I++)
		head = head->next;

	return(head);
}
