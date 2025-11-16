#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	print_t formats[] = {
		{"c", print_char}, {"i", print_int},
		{"f", print_float}, {"s", print_string},
		{NULL, NULL}
	};
	va_list myargs;
	unsigned int i = 0, j;
	char *sep = "";

	va_start(myargs, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].symbol)
		{
			if (format[i] == *(formats[j].symbol))
			{
				printf("%s", sep);
				formats[j].print(&myargs);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(myargs);
	printf("\n");
}
