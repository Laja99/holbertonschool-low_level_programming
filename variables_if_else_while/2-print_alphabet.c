#include <stdio.h>
/**
 * Main
 *
 * prints the alphabet in lowercase
 *
 * Return = Always 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
