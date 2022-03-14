/*
 * file: 5-print_numbers.c
 */
#include <stdio.h>
/**
 * main -prints all single digit numbers of base 10 starting from 0.
 *
 * return: 0
 */
int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}

