#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be allocated.
 *
 * Return: a pointer to the allocated memory or normal process termination if error
 */
void *malloc_checked(unsigned int b);
{
	void *p = malloc(b);
        /* blank line */
        if (p == NULL)
		exit(98);
	return (p);
}
