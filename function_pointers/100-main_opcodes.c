#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n, i;
	unsigned char *size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	size = (unsigned char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02x", size[i]);
		if (i == n - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
