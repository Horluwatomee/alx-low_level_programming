#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to head list_t list
 * @str: new string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len;
	char *dup_str;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	dup_str = strdup(str);
	if (!dup_str)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len];)
	       	len++;
		new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
