#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_all(const char * const format, ...)
{
    unsigned int i = 0;
    va_list myargs;
    char *str_arg;
    char type;
    int on_screen = 0;

    va_start(myargs, format);
    while (format != NULL && format[i] != '\0')
    {
        type = format[i];
        if (format[i] == 'c'|| format[i] == 'i'||
            format[i] == 'f' || format[i] == 's')
            {
                if (on_screen)
                {
                    printf(", ");
                }
                
                on_screen++;
            }
        
        
    }
    va_end(myargs);
    printf("\n");
}