#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head:pointer to head of the struct
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2 = head;
	listint_t *prev = head;

	if (head == NULL)
		return (NULL);

	while (prev && p2 && p2->next)
	{
		prev = prev->next;
		p2 = p2->next->next;

		if (prev == p2)
		{
			p2 = head;
			while (p2 != prev)
			{
				p2 = p2->next;
				prev = prev->next;
			}
			return (prev);
		}
	}
	return (NULL);
}
