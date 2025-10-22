#include "main.h"
/**
 * print_line - print _ draws a straight line
 *
 * @n: the parameter of line
 * Return
*/
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
