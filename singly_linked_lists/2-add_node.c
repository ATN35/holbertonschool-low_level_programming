#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - a function that adds a new node at the beginning of a list_t
 *@head: head
 *@str: str
 *Return: NULL or list
 */

list_t *add_node(list_t **head, const char *str)
{
	char *a;
	list_t *list;
	int b;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	a = strdup(str);
	if (a == NULL)
	{
		free(list);
		return (NULL);
	}
	for (b = 0; str[b];)
		b++;

	list->str = a;
	list->len = b;
	list->next = *head;

	*head = list;
	return (list);
}
