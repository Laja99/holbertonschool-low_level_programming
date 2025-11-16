#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: List of argument types
 */
void print_all(const char * const format, ...)
{
	va_list myargs;
	unsigned int i = 0;
	int sep = 0;
	char *s;

	va_start(myargs, format);

	while (format && format[i])
	{
		if (sep)
			printf(", ");

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(myargs, int));
			break;
		case 'i':
			printf("%d", va_arg(myargs, int));
			break;
		case 'f':
			printf("%f", va_arg(myargs, double));
			break;
		case 's':
			s = va_arg(myargs, char *);
			printf("%s", s ? s : "(nil)");
			break;
		default:
			i++;
			continue;
		}
		sep = 1;
		i++;
	}
	va_end(myargs);
	printf("\n");
}
