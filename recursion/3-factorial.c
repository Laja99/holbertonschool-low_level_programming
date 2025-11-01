#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number
 * Return: factorial
 */
int factorial(int n);
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	n *factorial(n - 1);
	return (n);
}
