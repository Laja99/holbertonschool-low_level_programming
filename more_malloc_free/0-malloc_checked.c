#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
*
* Return: pointer to allocated memory
* if failure, exit
*/
void *malloc_checked(unsigned int b)
{
	void *A;

	A = malloc(b);
	if (A == NULL)
	{
		exit(98);
	}
	return (A);
}
