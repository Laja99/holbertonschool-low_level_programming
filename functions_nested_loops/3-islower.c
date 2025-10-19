#include "main.h"
/**
 * _islower - if parameter c is lower case
 * @c: the parameter
 *
 * Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int index;
	int r;

	for (index = 0; ch[index] != '\0'; index++)
	{
		if (c == ch[index])
		{
			r = 1;
			break;
		}
		else
		{
			r = 0;
		}
	}

	putchar(r + '0');
	_putchar('\n');
}
