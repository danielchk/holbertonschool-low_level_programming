#include "holberton.h"
/**
 * puts2 - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] ; i++)
	{
		if (str[i] % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
