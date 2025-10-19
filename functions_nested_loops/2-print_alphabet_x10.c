#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet followed by a new line x10
*/
void print_alphabet_x10(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int index;
	int n;

	for (n = 0; n < 10; n++)
	{
		index = 0;
		while (ch[index] != '\0')
		{
			_putchar(ch[index]);
			index++;
		}
		_putchar('\n');
	}
}
