#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Seccess)
*/
int main(void)
{
	char ch[] = "_putchar";
	int index = 0;

	while (ch[index] != '\0')
	{
		putchar(ch[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
