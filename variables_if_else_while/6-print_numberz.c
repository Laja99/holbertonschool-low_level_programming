#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: for loop to print [0-9]
 *
 * Return = Always 0 (Seccess)
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
