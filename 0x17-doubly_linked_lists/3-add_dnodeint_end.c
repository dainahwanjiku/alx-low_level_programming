#include "lists.h"
#include <string.h>
#include <stdio.h>


/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: The character to print
 * @n: string for the new node
 
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	/* blank line */
	current = *head;
	while(current && current->next != NULL)
		current = current->next;
	/* blank line */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current;
	/* blank line */
	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
