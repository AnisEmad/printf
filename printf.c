#include "main.h"
/**
 * handle -handle specifier
 * @p:decision parameter
 * return : numbers of characters
 **/
int handle(const char *format, va_list args)
{ 
	int sum = 0, i, d;
	char c, *s;
	
	while(*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				sum += print_char(c);
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				sum += print_string(s);
			}
			else if (*format == '%')
			{
				sum += print_char('%');
			}
			else if (*format == 'd')
			{
				d = va_arg(args, int);
				sum += print_integer(d);
			}
			else if (*format == 'i')
			{
				i = va_arg(args, int);
				sum += handle_i(i);
			}
		}
		else 
			sum += print_char(*format);
		format++;
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
	int sum = 0;
                    
	if (!format)
	{
		return (-1);
	}

	va_start(args, format);
	sum += handle(format, args);
	va_end(args);
	return (sum);
}

