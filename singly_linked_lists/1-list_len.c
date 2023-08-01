#include "lists.h"

/**
 * list_len - function that counts the number of elements in a linked list
 * @h: pointer to the beginning of the list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
