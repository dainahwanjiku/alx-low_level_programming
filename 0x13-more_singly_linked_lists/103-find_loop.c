#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mins, *sec;

	mins = secs = head;
	while (mins && secs && secs->next)
	{
		mins = mins->next;
		secs = secs->next->next;
		if (mins == secs)
		{
			mins = head;
			break;
		}
	}
	if (!mins || !secs || !secs->next)
		return (NULL);
	while (mins != secs)
	{
		mins = mins->next;
		secs = secs->next;
	}
	return (secs);
}
