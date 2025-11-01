#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: array
 * return: 0
 */
int _strlen_recursion(char *s)
{
	int len = _strlen_recursion(s + 1);
	int tot = len + 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (tot);
}
