#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * if the linked list is empty return 0
 * head: the head node.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int value = 0;
	if ( *head == NULL)
		return (0);
	tmp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = tmp;
	return (value);
}
