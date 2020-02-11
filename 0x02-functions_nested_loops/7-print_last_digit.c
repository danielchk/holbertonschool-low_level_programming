#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	n = -n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
