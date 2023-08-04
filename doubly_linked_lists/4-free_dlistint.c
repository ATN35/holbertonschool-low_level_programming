#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: poitner to node
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
