#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: pointer to the first node's pointer
 * @n: data of the node
 * Return: NULL or new
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (new);
}
