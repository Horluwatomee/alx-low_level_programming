#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the head node
 * @str: pointer to the str to be added at the end of list_t
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end, *final;
	int len;
	char *dup_str;

	node_end = malloc(sizeof(list_t));
	if (!node_end)
		return (NULL);

	dup_str = strdup(str);
	if (!str)
	{
		free(node_end);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	node_end->str = dup_str;
	node_end->len = len;
	node_end->next = NULL;

	if (!*head)
		*head = node_end;
	else
	{
		final = *head;
		while (final->next != NULL)
			final = final->next;
		final->next;
		final->next = node_end;
	}
	return (*head);
}
