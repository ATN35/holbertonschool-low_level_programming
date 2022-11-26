#include "lists.h"

/**
 * dlistint_len - a function that that returns the number of elements
 * @h: pointer to node
 * Return: nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
