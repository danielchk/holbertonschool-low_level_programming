#include "holberton.h"
/**
 * print_rev - Entry point
 * @s: quote
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int h;
	char reverse;

	for (h = 0 ; s[h] != 0 ; h++)
	{
	}

	for (h = h - 1 ; h >= 0 ; h--)
	{
		reverse = (s[h]);
		_putchar(reverse);
	}
	_putchar('\n');
}
