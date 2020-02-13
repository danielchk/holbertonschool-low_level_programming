#include "holberton.h"
/**
 * print_diagonal - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			for (b = 1 ; b < a ; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
