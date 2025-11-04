#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array of chars
* @size: size of the array
* @c: char to fill the array with
*
* Return: pointer to the array, or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	if (size == 0)
		return (NULL);
	A = (char *)malloc(size * sizeof(char));

	if (A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
