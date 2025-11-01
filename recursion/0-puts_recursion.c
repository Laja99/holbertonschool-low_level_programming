#include "main.h"
/**
 * _puts_recursion - function that prints a string,
 *  followed by a new line with recursion
 *  @s: array to print
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchae('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
