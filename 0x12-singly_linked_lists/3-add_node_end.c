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
	list_t *node_end, *temp;
	size_t str_len = 0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] != '\0')
		str_len++;

	node_end = malloc(sizeof(list_t));
	if (node_end == NULL)
		return (NULL);

	node_end->str = strdup(str);
	node_end->len = str_len;
	node_end->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = node_end;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node_end;
	}
	return (*head);
}
