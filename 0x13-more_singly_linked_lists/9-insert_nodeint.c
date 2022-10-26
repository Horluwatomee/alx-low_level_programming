#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: head of a structure
 * @idx:index of the list where the new node should be added
 * @n: new node to be added
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index;

	current = *head;
	/*place first node at current*/

	new_node = malloc(sizeof(listint_t));
	if (*head == NULL && idx != 0) || new_node == NULL)
		return (NULL);

	new_node->n = n
		/* add new element to the new node*/

		/*iterate list to node position idx - 2)*/
		for (index = 0; head != NULL && index < idx - 1; index++)
		{
			current = current->next;
			if (current == NULL)
				return (NULL);
		}
	if (idx == 0)
	{
		/*first node will be moved to second node*/
		new_node->next = *head;
		/*new node will be placed a s the first node*/
		*head = new_node;
	}
	else if (current->next) /* if the index where a new node is to be added is not 0*/
	{
		new_node->next = current->next; /*place current node after the new node*/
		current->next = new_node;
		/*set new node at the index idx*/
	}
	else /*if node position is not present in the list*/
	{
		new_node->next = NULL; /*setting next address a sNULL, indicates last node*/
		current->next = new_node; /*set new node at the last position in the list*/
	}
	return (new_node);
}
