#include "main.h"
/**
 * *_strpbrk - function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string to search
 * @accept: string to match
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int sa, ac;

	for (sa = 0; s[sa] != '\0'; sa++)
	{
		for (ac = 0; accept[ac] != '\0'; ac++)
		{
			if (s[sa] == accept[ac])
			{
				return (s + sa);
			}
		}
	}
	return (0);
}
