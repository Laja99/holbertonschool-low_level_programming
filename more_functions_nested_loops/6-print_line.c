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

	x = 0;
	while (x <= n)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
		}
		x++;
	}
	return;
}
