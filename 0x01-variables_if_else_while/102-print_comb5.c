#include <stdio.h>

/**
 * main - prints all possible comobination of two digits numbers
 *
 * Return 0
 */

int main(void)
{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; p++)
		{
			if (p > i)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(p / 10 + '0');
				putchar(p % 10 + '0');
				
				if (i * 100 + j != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
