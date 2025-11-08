#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - duplicates a string
* @str: string to duplicate
*
* Return: pointer to the duplicated string or NULL if insufficient memory
*/
char *_strdup(char *str)
{
	char *A;
	int i = 0, len = 0;

	if (str == NULL)
	{
		return NULL;
	}
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	A = malloc((len + 1) * sizeof(char));
	if (A == NULL)
	{
		return NULL;
	}
	for (i = 0; i < len; i++)
	{
		A[i] = str[i];
	}
	A[len] = '\0';
	return A;
}
