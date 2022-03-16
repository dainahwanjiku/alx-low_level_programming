#include "main.h"
/**
 * Print_alphabet -prints the alphabet in lowercase, followed by a new line.
 *
 *Return: void
 */
void print_alphabet(void)
{
	char letter;
	/* blank line */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

