#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * @n: the parameter of diagonal line
 * Return
*/
void print_diagonal(int n)
{
	int x;
	
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 1; x < n; x++)
	{
		_putchar(' ');
		if (x == n)
		{
			_putchar('/');
		}
	}
	_putchar('\n');
}
