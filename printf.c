#include "main.h"
/**
 * handle -handle specifier 
 * @p:decision parameter
 * return : numbers of characters
 **/
int handle(char p)
{ 
	int sum = 0;
                        if (p == 'c')
                        {
                                c = va_arg(args, int);
                                sum += print_char(c);
                        }
                        else if (p == 's')
                        {
                                s = va_arg(args, char *);
                                sum += print_string(s);
                        }
                        else if (p == '%')
                        {
                                sum += print_char('%');
                        }
                        else if (p == 'd')
                        {
                                d = va_arg(args, int);
                                sum += print_integer(d);
                        }
                        else if (p == 'i')
                        {
                                ii = va_arg(args, int);
				       sum += handle_i(ii);
                        }
			return (sum);
}
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
	int i;
	char c, *s;
	int d, ii, sum = 0;
                    
	if (!format)
	{
		return (-1);
	}

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			sum += handle(format[i];
		} else
			sum += print_char(format[i]);
	}
	va_end(args);
	return (sum);
}


