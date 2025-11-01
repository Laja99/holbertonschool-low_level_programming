#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: array
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	_strlen_recursion(len);
	len++;
	if (*s == '\0')
	{
		_putchar(len);
	}
}
