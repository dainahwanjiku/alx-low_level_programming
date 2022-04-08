#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;
        /* blank line */
	if (s1 == NULL)
		s1 = "";
	/* blank line */
	if (s2 == NULL)
		s2 = "";
	/* blank line */
	for (index = 0; s1[index]; index++)
		len++;
	/* blank line */
	concat = malloc(sizeof(char) * (len + 1));
	/* blank line */
	if (concat == NULL)
		return (NULL);
	/* blank line */
	len = 0;
	/* blank line */
	for (index = 0; s1[index]; index++)
	/* blank line */
		concat[len++] = s1[index];
	/* blank line */
	for (index = 0; s2[index] && index < n; index++)
		/* blank line*/
		concat[len++] = s2[index];
	/* blank line */
	concat[len] = '\0';
	/* blank line */
	return (concat);
}
