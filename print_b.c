#include "main.h"
/**
  * print_b - print number in binray
  * @b: number used
  * REturn: number of characters printed
  */
int print_b(int n)
{
	char binary[32];
	int index = 0, sum = 0, i;

	while (n > 0)
	{
		int remainder = n % 2;
		binary[index++] = remainder + '0';
		n /= 2;
		sum++;
	}

	for (i = index - 1; i >= 0; i--)
	{
		print_char(binary[i]);
	}
	return (sum);
}
