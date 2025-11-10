#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i, j;
    j = size;

    for (i = 0; i < j; i++)
    {
        action(array[i]);
    }
}