#include <stdio.h>
#include "lists.h"

/**
 * listint_len: Function to print element of a singly linked lisy
 *
 * @h: pointer to a node in the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	} return (count);
}
