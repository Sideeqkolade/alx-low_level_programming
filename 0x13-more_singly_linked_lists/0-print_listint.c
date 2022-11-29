#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the listint_t list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		print("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
