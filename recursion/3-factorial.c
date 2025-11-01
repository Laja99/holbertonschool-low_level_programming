#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number
 * Return: factorial
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	f = n *factorial(n - 1);
	return (f);
}
