#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @str: pointer to the new node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end, *last;
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
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next;
		last->next = node_end;
	}
	return (*head);
}
