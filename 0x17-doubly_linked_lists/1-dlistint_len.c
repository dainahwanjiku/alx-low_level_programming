#include "lists.h"
#include <stdio.h>


/**
 * dlistint_len - find no.s of nodes of doubly linked list.
 * @h : head pointer
 *
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nos_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nos_nodes++;
	}
	return (nbr_nodes);
}
