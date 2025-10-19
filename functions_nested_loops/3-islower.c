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

	for (index = 0; ch[index] != '\0'; index++)
	{
		if (c == ch[index])
			return(1);
	}
	return(0);
}
