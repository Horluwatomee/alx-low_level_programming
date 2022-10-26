#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index 
 * index of a listint_t linked list.
 * @head: head of a struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
