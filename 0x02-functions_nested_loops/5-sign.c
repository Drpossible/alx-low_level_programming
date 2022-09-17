#include "main.h"

/**
 * print_sign - sign of a number
 *
 * @n: n is the integer
 * Return: 1 and print +, 0 print 0, -1 print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
