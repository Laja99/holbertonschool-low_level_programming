#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: array
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return;
	}
	_strlen_recursion(len + 1)
	return (len);
}
