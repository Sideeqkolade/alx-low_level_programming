#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked listint_t list
 * @h: the listint_t list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
