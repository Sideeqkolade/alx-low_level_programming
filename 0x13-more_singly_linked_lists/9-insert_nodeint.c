#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 * @head: a pointer to the list head address
 * @idx: position to insert new node
 * @n: the data of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len;
	listint_t *newnode, *tmp;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;

		*head = newnode;
	}
	else
	{
		newnode->next = h->next;

		h->next = newnode;
	}
	return (newnode);
}
