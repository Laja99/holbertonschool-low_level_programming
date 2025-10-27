#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: memory area
 * @c: the character
 *  * Return: pointer to the first occurrence of c in s, or NULL if not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (;s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (0);
}
