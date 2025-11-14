#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: a variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list myargs;

	va_start(myargs, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(myargs, int));
			if (separator != NULL && i < n - 1)
			{
				printf("%s", separator);
			}
	}
	va_end(myargs);
	printf("\n");
}
