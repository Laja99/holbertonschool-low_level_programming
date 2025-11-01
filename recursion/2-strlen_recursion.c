#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: array
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int len, tot;
	if (*s == '\0')
	{
		return (0);
	}
	len = _strlen_recursion(s + 1);
	tot = len + 1;

	return (tot);
}
