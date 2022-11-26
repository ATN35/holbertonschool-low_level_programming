#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: head
 * @index: the index of the node, starting from 0
 * Return: NULL or head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
