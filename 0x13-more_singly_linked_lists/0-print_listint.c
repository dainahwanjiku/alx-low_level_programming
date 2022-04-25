#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: print list. 
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h-> next;
                nodes++;
        }
	return (nodes);
}	
