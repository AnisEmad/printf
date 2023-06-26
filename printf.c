#include "main.h"
#include <cstdio>
/**
 * _printf - Custom printf function
 * @format: Pointer to a constant format string
 *
 * Description:
 * This function prints formatted output to the standard output (stdout),
 * based on the format string and additional arguments provided.
 *
 * Return:
 * The number of characters printed on success, or -1 on error.
 **/
 int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int i;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                print_char(c);
            }
            else if (format[i] == 's')
            {
                char *c = va_arg(args, char *);
                print_string(c);
            }
            else if (format[i] == '%')
            {
                print_char('%');
            }
            else if (format[i] == 'd')
            {
                int d = va_arg(args, int);
                print_integer(d);
            }
            else if (format[i] == 'i')
            {
                int i = va_arg(args, int);
                handle_i(i);
            }
        } else
            print_char(format[i]);
    }
}

