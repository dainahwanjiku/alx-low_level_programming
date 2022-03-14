/*
 * file: 7-print_tebahpla.c
 */
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse.
 *
 * return: 0
 */
int main(void)
{
	char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}

