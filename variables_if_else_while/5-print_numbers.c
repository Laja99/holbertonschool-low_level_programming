#include <stdio.h>
/**
 * main -entry point
 *
 * Descriptino: for loop number
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	return (0);
}
