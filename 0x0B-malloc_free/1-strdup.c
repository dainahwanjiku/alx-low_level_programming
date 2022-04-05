#include "main.h"
#include <stdlib.h>

/**
 * _strdup: returns a pointer to a new string which is a duplicate of the string str.
 * @str: string to copy
 *
 * Return: pointer to duplicated string or error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;
	/* blank line */
	if (str == NULL)
		return (NULL);
	for (i=0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
