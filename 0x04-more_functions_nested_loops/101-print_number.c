#include "holberton.h"
/**
 * print_number - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}
