#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
*/
void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int index = 0;

	while (ch[index] != '\0')
	{
		_putchar(ch[index]);
		index++;
	}
	_putchar('\n');
}
