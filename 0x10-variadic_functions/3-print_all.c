#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print variable types
 * @format: input
 */
void print_all(const char *const format, ...)
{
    va_list args;
    unsigned int i = 0, start = 0;
    char *s;

    va_start(args, format);
    while (format[i] != '\0')
    {
        switch (format[i])
        {
        case 'c':
            switch (start)
            {
            case 1:
                printf(", ");
            }
            start = 1;
            printf("%c", va_arg(args, int));
            break;
        case 'i':
            switch (start)
            {
            case 1:
                printf(", ");
            }
            start = 1;
            printf("%i", va_arg(args, int));
            break;
        case 'f':
            switch (start)
            {
            case 1:
                printf(", ");
            }
            start = 1;
            printf("%f", va_arg(args, double));
            break;
        case 's':
            switch (start)
            {
            case 1:
                printf(", ");
            }
            start = 1;
            s = va_arg(args, char *);
            if (s)
            {
                printf("%s", s);
                break;
            }
            printf("%p", s);
            break;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
