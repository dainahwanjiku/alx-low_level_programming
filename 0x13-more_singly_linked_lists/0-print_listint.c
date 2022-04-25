#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to the start of the int list. 
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while(h != NULL)
	{
		nodes++;
		if(h->int == NULL)
		{	
			printf("[0] (nil)\n");
		} 
		else
		{
			printf("%d\n", h->len, h->int);
		}
		h = h-> next;

        }
	return (nodes);
}	
