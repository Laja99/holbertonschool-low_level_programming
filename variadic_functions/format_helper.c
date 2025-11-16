#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_char - prints a char
 * @args: arguments list
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an integer
 * @args: arguments list
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - prints a float
 * @args: arguments list
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string
 * @args: arguments list
 */
void print_string(va_list *args)
{
	char *s = va_arg(*args, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
