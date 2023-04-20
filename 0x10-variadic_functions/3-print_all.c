#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints a list of values with a specified format
 *
 * @format: the format string indicating the types of values to print
 * @...: the values to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c, *str;
	int num;
	float flt;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}

	va_end(args);

	printf("\n");
}

