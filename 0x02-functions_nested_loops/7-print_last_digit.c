#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @c: integer
 *
 * Return: Last digit
 */
int print_last_digit(int c)
{
	int n;

	if (c < 0)
		n = -1 * (c % 10);
	else
		n = c % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
