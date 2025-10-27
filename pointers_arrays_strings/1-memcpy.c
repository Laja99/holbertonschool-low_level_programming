#include "main.h"
/**
 * *_memcpy - function copies n bytes from src to dest
 * @src: the memory area
 * @dest: the memory area
 * @n: bytes of the memory area pointed
 * Return: dest
*/
char *_memcpy(char src, char dest, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
        }
        return (dest);
}
