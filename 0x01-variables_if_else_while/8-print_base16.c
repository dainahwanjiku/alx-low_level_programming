#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Return:Always 0
 */
int main(void)
{
	int num;
	/* the black line belongs over here */
	char letter;
	/* the blank line belongs here too */
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

