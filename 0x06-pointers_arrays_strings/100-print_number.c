#include "holberton.h"
/**
 * print_number - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int r;

	if (n < 0)
	{
		_putchar('-');
		r = -n;
	}
	else
	{
		r = n;
	}

	if (r / 10)
	{
		print_number(r / 10);
	}

	_putchar(r % 10 + '0');
}
