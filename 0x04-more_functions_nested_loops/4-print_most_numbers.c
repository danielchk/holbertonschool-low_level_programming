#include "holberton.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int a;
	for (a = 48 ; a < 58 ; a++)
	{
		if (a == 50 || a == 52)
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
