#include "main.h"
/**
 * _isupper - if parameter c is upper case
 * @c: the parameter
 *
 * Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
        char ch[] = "ABCDEFGHIJKLMONOPQRSTUVWXYZ";
        int index;

        for (index = 0; ch[index] != '\0'; index++)
        {
                if (c == ch[index])
                        return (1);
        }
        return (0);
}
