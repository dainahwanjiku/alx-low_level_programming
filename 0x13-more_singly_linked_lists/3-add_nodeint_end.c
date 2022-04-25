#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: node in the head.
 * @n: int to store in N
 * 
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;
	/* blank line */
	if (!head)
		return (NULL);
	last = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		printf("error\n");
		return (NULL);
	}
	new-> = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (*head);
}

