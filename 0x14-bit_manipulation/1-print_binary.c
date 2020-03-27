#include "holberton.h"
/**
 * print_binary - number in binary
 * @n: number to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin;
	int i, j;

	if (n == '0')
		_putchar('0');

	bin = n
	for (i = 0; bin; i++)
		bin = bin >> 1;

	for (i - 1; i; i--)
	{
		j = n >> i;
		if (j & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
