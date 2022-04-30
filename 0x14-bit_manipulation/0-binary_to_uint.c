#include "main.h"

/**
 * _strlen - finding the length of a string.
 * @s: first pointer
 * Return: it returns the length of the string.
 */
int _strlen(char *s)
{
	int str;

	str = 0;
	while (s[str] != '\0')
		str++;
	return (str);
}
/**
 * x_to_the_n - Fucntion that does to the power of
 * @x: the number
 * @n: the eleveado
 * Return:@number the result
 */
int x_to_the_n(int x, int n)
{
	int i;
	int number = 1;

	for (i = 0; i < n; ++i)
		number *= x;
	return (number);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if  not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0, operand = 0, len = 0;
	unsigned int result = 0;

	if (!b)
		return (0);
	len = _strlen((char *) b);
	while (b[j] != '\0')
	{
		if (b[j] < 48 || b[j] > 49)
			return (0);
		operand = x_to_the_n(2, j);
		if (b[len - 1] == 49)/*Ascci code of 1*/
			result += operand;
		len--;
		j++;
	}
	return (result);
}
