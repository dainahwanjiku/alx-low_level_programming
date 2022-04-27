#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
 * @index -  is the index of the node, starting at 0
 * if the node does not exist, return NULL
 *
 * Return: @head if node found or null if not.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (!head)
		return (NULL);
	while (head)
	{
		if (cnt == index)
			return (head);
		head = head->next;
		cnt++;
	}
	return (NULL);
}





