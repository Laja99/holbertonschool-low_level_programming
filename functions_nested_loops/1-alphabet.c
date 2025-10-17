#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess)
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
