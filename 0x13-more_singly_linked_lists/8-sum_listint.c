#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int majmo3 = 0;
	listint_t *var = head;

	while (var)
	{
		majmo3 += var->n;
		var = var->next;
	}

	return (majmo3);
}
