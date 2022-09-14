#include <stdio.h>

/**
 * main - combination of numbers
 *
 * Return: Always (success)
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = c + 1; i <= '9'; i++)
		{
			if (i != c)
			{
				putchar(c);
				putchar(i);

				if (c == '8' && p == '9')
				continue;

					putchar(',');
					putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
