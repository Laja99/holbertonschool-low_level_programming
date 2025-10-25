#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to modify
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0, cap = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (s[i] != '\0')
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		cap = 0;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j])
			{
				cap = 1;
				break;
			}
		}
		i++;
	}
	return (s);
}
