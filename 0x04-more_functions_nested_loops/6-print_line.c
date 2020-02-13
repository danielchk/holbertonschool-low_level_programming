#include "holberton.h"
/**
 * print_line - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int a;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0 ; a <= n ; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
