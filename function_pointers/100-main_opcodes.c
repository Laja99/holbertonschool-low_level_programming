#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }
    int n = atoi(argv[1]);
    if (n < 0)
    {
        printf("Error\n");
        exit(2);
    }
    unsigned char *size = (unsigned char *) main;
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%02x", size[i]);
        if (i == n - 1)
            printf("\n");
        else
            printf(" "); 
    }
    return (0);
}