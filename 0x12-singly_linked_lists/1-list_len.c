#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the element of a singly linked list
 * @h: pointer to head of the linked list
 *
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
