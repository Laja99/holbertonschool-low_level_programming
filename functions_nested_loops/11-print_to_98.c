#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Description: prints numbers separated by comma and space, ending with newlin
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("98\n");
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("98\n");
	}
}
