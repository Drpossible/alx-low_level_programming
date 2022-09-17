#include "main.h"

/**
 * print_alphabet_x10 - 10 times Alphabet in lower case
 *
 * Return:0
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int a = 0;

	while (a < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
		a++;
	}
}
