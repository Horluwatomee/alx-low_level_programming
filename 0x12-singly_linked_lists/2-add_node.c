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
	unsigned int copy_len = 0;
	char *new_str;

	if (!head)
		return (0);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (0);

	for (copy_len = 0; str[copy_len] != '\0', copy_len++;)
	{}
	new_str = strdup(str);
	new_node->str = new_str;
	new_node->len = copy_len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
