#include "holberton.h"
/**
 * _puts - Entry point
 * @str: qoute
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int h;
	char alpha;

	for (h = 0 ; str[h] != 0 ; h++)
	{
		alpha = str[h];
		_putchar(alpha);
	}
	_putchar('\n');
}
