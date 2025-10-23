#include <stdio.h>
/**
 * main - give the number from 1 to 100 with FizzBuzz
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", c);
		}
	}
	return (0);
}
