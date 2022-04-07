#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be allocated.
 *
 * Return: a pointer to the allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b);
{
	void *p = malloc(b);
        
        if (p == NULL)
		exit(98);
	return (p);
}
