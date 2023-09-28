#include "main.h"

/**
 * print_binary - function that prints the binary rep of a number.
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, format = 0;
	unsigned long int index;

	for (i = 63; i >= 0; i--)
	{
		index = n >> i;

		if (index & 1)
		{
			_putchar('1');
			format++;
		}
		else if (format)
			_putchar('0');
	}
	if (!format)
		_putchar('0');
}
