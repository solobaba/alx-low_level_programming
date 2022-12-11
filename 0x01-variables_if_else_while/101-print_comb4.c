#include <stdio.h>
/**
 * main - program that prints all possile different contributions of three digits
 *
 * Return: 0 Successful
 */
int main(void)
{
	int i;
	int n;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (n = 48; n < 58; n++)
		{
			if (n > i)
			{
				for (j = 48; j < 58; j++)
				{
					if (j > n)
						{
						putchar(i);
						putchar(n);
						putchar(j);
						if (i == 5 && n == 55 && j == 55)
						{
							break;
						}

						putchar(',');
						putchar(' ');
						}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
