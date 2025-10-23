#include "main.h"
/**
 * print_triangle - draws a triangle
 *
 * @size: the parameter
 * Return
*/
void print_triangle(int size)
{
	int row, s, h;

	if (size <= 0)
	{

		_putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (s = 0; s < size - row - 1; s++)
		{
			_putchar(' ');
		}
		for (h = 0; h <= row; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
