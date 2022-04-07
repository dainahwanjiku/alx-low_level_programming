#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- allocates memory
 * @b: memory to allocate
 *
 * Returns: a pointer to the allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b);
{
	void *p;
        /* blank line */ 
	p = malloc(b);
        if (p == NULL)
		exit(98);
	return (p);
}
