#include <stdio.h>
/**
 * Main - Entry point
 *
 * prints the alphabet in lowercase with for loop
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
	putchar('\n');
	return (0);
}
