#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 * @head: is the pointer to the first element
 * @n: a constant integer
 *
 * Return: the address of the new node or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
