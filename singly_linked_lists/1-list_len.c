#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - a function that returns the number of elements in a linked list_t
 *@h: h
 *Return: list
*/

size_t list_len(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		list++;
		h = h->next;
	}
	return (list);
}
