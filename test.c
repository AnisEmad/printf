#include "main.h"
/**
 *  test_1 -test for specifier 
 *  @c: character
 *  @args: list of arguments 
 *  Return: number of character printed
 **/
int test_1(char c, va_list args)
{
	int sum = 0, i;
	char c2, *s;

	if (c == 'c')
	{	
    		cc = va_arg(args, int);
		sum += print_char(cc);
	}	
	else if (c == 's')
	{
		 s = va_arg(args, char *);
    		sum += print_string(s);
	}
	else if (c == '%')
	{
    		sum += print_char('%');
	}
	else if (c == 'd')
	{
    		i = va_arg(args, int);
    		sum += handle_i(i);
	}
	else if (c == 'i')
	{
		 i = va_arg(args, int);
		 sum += handle_i(i);
	}
	else
		return (test_2(c, args));
	return (sum);
	




