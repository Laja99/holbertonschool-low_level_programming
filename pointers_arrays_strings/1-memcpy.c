#include "main.h"
/**
 * *_memcpy - function copies n bytes from src to dest
 * @src: the memory area
 * @dest: the memory area
 * @n: bytes of the memory area pointed
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
