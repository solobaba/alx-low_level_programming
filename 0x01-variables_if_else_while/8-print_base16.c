#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		} else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
