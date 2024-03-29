#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to first element in a list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int inc;

	inc = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		inc++;
	}
	return (inc);
}
