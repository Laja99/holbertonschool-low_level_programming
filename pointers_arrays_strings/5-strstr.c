#include "main.h"
/**
 * *_strstr - locate a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer byte of needle in haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int h = 0, n = 0;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		if (haystack[h] == needle[0])
		{
			for (n = 0; needle[n] != '\0'; n++)
			{
				if (haystack[h + n] == '\0')
				{
					return (o);
				}
				else if (haystack[h + n] != needle[n])
				{
					break;
				}
			}
			if (needle[n] == '\0')
			{
				return (&haystack[h])
		}
		return (0);
}
