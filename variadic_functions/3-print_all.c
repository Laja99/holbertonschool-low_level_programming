#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list myargs;
	unsigned int i = 0;
	char *str_arg;
	int on_screen = 0;

	va_start(myargs, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			if (on_screen)
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
					str_arg = va_arg(myargs, char *);
					if (str_arg == NULL)
						str_arg = "(nil)";
					printf("%s", str_arg);
					break;
			}
			on_screen = 1;
		}
		i++;
	}

	va_end(myargs);
	printf("\n");
}
