#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: array
 */
int _strlen_recursion(char *s)
{
	int len = _strlen_recursion(s + 1);
	int tot = len + 1;

	if (*s == '\0')
	{
		return;
	}
	_putchar(tot);
}
