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
	int i;
	char c;
	char *s;
	int d, ii;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				print_char(c);
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				print_string(c);
			}
			else if (format[i] == '%')
			{
				print_char('%');
			}
			else if (format[i] == 'd')
			{
				d = va_arg(args, int);
				print_integer(d);
			}
			else if (format[i] == 'i')
			{
				ii = va_arg(args, int);
				handle_i(ii);
			}
		} else
			print_char(format[i]);
	}
}
