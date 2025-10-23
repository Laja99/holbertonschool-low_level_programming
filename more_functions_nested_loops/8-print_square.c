#include "main.h"
/**
 * print_square - draws a square
 *
 * @size: the parameter of size
 * Return
*/
void print_square(int size)
{
	int row, col;
	char s = '#';

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar(s);
		}
		_putchar('\n');
	}
}
