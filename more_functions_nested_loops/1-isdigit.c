#include "main.h"
/**
 * _isdigit - if parameter c is digit
 * @c: the parameter
 *
 * Return: 1 if c is digit, 0 otherwise
*/
int _isdigit(int c)
{
	int num[] = "0123456789";
	int index;

	for (index = 0; num[index] != '\0'; index++)
	{
		if (c == num[index])
			return (1);
	}
	return (0);
}
