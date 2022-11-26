#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data(n)
 * @head: head
 * Return: i
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
