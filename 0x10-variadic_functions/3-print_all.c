#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the functio.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, vs_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
