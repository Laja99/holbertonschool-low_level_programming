#include "main.h"
/**
 * *_memset - function fills the first n bytes of the memory area,
 * pointed to by s with the constant byte b
 * @s: the memory area
 * @b: constant byte
 * @n: bytes of the memory area pointed
 * Return: s
 *
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
