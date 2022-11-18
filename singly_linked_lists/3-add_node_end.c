#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: head
 * @str: str
 * Return: NULL or a
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a;
	int i;
	list_t *b;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	b = *head;
	for (i = 0; str[i];)
		i++;

	a->str = strdup(str);
	a->len = i;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}
	while (b->next != NULL)
		b = b->next;
	b->next = a;
	return (a);
}
