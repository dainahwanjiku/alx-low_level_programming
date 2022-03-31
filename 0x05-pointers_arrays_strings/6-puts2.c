#include "main.h"

/**
 *puts2 - prints every other character of a string to stdout
 *@str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0, len = 0;
	/* blank line */
	while (str[index++])
		len++;
	for (index = 0; index < len; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
