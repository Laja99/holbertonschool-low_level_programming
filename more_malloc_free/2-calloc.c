#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements
* @size: size of each element
*
* Return: pointer to allocated memory, or NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tot, i;
	char *A;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

		tot = nmemb * size;
		A = malloc(tot);
	if (A == NULL)
		return (NULL);

	for (i = 0; i < tot; i++)
		A[i] = 0;

	return (A);
}
