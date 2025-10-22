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
		return (0);
	}
	for (x = 0; x <= n; x++)
	{
		_putchar('_');
	}
}
