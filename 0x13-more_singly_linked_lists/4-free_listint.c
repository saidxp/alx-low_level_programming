#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to first list element
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *var;

	while (head != NULL)
	{
		var = head;
		head = head->next;
		free(var);
	}
}
