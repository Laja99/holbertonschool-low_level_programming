#include "main.h"
/**
 * print_sign - if parameter sign +,0,-
 * @n: the parameter
 *
 * Return: 1 if +n and -1 if -n and 0 if n is 0
*/
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar(0);
	}
	else
	_putchar('-');
}
