#include <stdio.h>
/**
* int_index - searches for an integer
* @array: array of integers
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
* Return: index if cmp function does not return 0
* -1 if no element matches or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
