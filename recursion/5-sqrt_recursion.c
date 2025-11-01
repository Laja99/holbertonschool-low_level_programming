#include "main.h"
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
/**
 * sqrt_helper - helper function to find square root
 * @n: the number
 * @r: the current guess
 * Return: square root
 */
int sqrt_helper(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);
	return (sqrt_helper(n, r + 1));
}
