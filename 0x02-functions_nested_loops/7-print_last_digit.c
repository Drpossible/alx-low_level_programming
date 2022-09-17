#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @c: integer
 *
 * Return: Last digit
 */
int print_last_digit(int c)
{
	c = c % 10;

	if (c < 0)
	{
		c = c * -1;
	}

	putchar('0' + -1);
	return (c);
}
