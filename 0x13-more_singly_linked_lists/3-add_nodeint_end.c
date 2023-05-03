#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first element of list
 * @n: element to be added in the list
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_nodeint, *l_nodeint;

	n_nodeint = malloc(sizeof(listint_t));
	if (n_nodeint == NULL)
		return (NULL);

	n_nodeint->n = n;
	n_nodeint->next = NULL;

	/* if head is a NULL pointer, assign new node to it */
	if (*head == NULL)
		*head = n_nodeint;
	else
	{
		l_nodeint = *head;
		while (l_nodeint->next != NULL)
			l_nodeint = l_nodeint->next;
		l_nodeint->next = n_nodeint;
	}

	return (n_nodeint);
}
