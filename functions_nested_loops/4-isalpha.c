#include "main.h"
/**
 * _isalpha - if parameter c is lower case
 * @c: the parameter
 *
 * Return: 1 if c is alphabete, 0 otherwise
*/
int _isalpha(int c)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int index;

	for (index = 0; ch[index] != '\0'; index++)
	{
		if (c == ch[index])
			return (1);
	}
	return (0);
}
