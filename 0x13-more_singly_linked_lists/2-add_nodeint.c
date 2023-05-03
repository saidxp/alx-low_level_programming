#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to  pointer of first element
 * @n: elements to be added
 *
 * Return: address fo new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *var;

	var = malloc(sizeof(listint_t));
	if (var == NULL)
		return (NULL);

	var->next = *head;
	var->n = n;

	*head = var;

	return (*head);
}
