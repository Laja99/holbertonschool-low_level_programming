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
		return (0);
	}
	for (col = 1; col <= n; col++)
	{
		for (row = 1; row <= col; row++)
		{
			_putchar(' ');
			if (row == col)
			{
			_putchar(s);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
