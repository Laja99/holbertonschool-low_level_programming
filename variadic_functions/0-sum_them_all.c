#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list myargs;

	va_start(myargs, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(myargs, int);
	}
	va_end(myargs);

	return (result);
}
