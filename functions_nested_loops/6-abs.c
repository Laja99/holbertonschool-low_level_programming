#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: the integer to get the absolute value of
 *
 * Return: the absolute value of the integer r
*/
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
