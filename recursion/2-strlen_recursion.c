#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: array
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	int len = _strlen_recursion(s + 1);
	int total = len + 1;
	return (total);
}
