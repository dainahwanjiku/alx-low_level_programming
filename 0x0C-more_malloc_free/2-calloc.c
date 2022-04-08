#include "main.h"
#include <stdlib.h>

/**
 * _calloc: allocates memory for an array of nmemb elements 
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size);
{
	char *p;
	unsigned int i;
	/* blank line */
	if(nmeb == 0 || size == 0)
		
		return (NULL);
	
	p = malloc(nmemb * size);
	
	if (p == NULL)
		
		return (NULL);
	
	for (i = 0; i < (nmemb * size); i++)
		
		p[i] = 0;
	
	return (p);
}
