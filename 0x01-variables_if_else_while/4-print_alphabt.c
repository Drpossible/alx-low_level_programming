#include <stdio.h>

/**
 * main - print some lettets of alphabet
 *
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
