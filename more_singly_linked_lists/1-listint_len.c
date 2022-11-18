#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * @h: head
 * Return: len
 */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
