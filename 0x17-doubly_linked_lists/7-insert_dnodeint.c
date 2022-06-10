#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 *
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	/* blank line */
	if (h == NULL)
		return (0);
	/* blank line */
	current = *h;
	/* blank line */
	while (idx != 0)
	{
		current = current->next;
		idx--;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	/* blank line */
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/* blank line */
	new->n = n;
	new->next = current;
	new->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new;
	/* blank line */
	return (current);
}
