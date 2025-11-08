#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes to concatenate from s2
*
* Return: pointer to the newly allocated
* space in memory, or NULL if it fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	new = malloc(sizeof(char) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (i = 0; i < n; i++)
	{
		new[len1 + i] = s2[i];
	}
	new[len1 + n] = '\0';
	return (new);
}
