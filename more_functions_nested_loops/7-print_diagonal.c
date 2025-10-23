#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * @n: the parameter of diagonal line
 * Return
*/
void print_diagonal(int n)
{
	int row, col;
	char s = '\\';

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row <= n; row++)
	{
		for (col = 1; col <= row; col++)
		{
			_putchar(' ');
		}
		_putchar(s);
		_putchar('\n');
	}
	_putchar('\n');
}
