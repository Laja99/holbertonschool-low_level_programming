#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, i = 0;
char *concat;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
len1++;
i++;
}
i = 0;
while (s2[i] != '\0')
{
len2++;
i++;
}
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (i = 0; i < len2; i++)
concat[len1 + i] = s2[i];
concat[len1 + len2] = '\0';
return (concat);
}
