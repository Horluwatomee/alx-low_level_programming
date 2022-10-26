#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: head of a struct
 *
 * Return: 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/*add n to sum*/
		sum += head->n;
		/*go to the next node*/
		head = head->next;
	}
	/*if list will be empty ,then return sum = 0*/
	return (sum);
}
