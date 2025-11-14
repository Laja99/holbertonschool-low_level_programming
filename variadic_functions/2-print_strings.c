#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - prints strings, followed by a new line.
* @separator: the string to be printed between the strings.
* @n: the number of strings passed to the function.
* @...: a variable number of strings to be printed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list myargs;

	va_start(myargs, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(myargs, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(myargs);
	printf("\n");
}
