#include <stdio.h>
 /**
  * main - print three combination of numbers
  *
  * Return: Always (success)
  */
int main(void)
{
	int c, i, k, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; c <= 57; i++)
		{
			for (k = 48; c <= 57; k++)
			{
				for (j = 48; c <= 57; j++)
				{
					if (((k + j) > (c + i) && k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);
						{
							if (c + i + k + j == 227 && c == 57)
						}
						{
						break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
