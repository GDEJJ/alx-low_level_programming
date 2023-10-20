#include "lists.h"

/**
 * list_len - finds the length of a list
 * @h: head node
 * Return: length of the new node
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
