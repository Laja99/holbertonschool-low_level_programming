#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number
 * @y: raised of number
 * Return: raised to the power of x
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
