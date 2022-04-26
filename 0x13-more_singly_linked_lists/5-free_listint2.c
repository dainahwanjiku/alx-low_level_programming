#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list. Function sets the head to NULL.
 * head: 
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *next;
	if (head ==NULL)
		return NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
