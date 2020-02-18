#include "holberton.h"
/**
 * puts_half - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
	}

	if (i % 2 == 0)
	{
		j = i / 2;
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = (i - 1) / 2;
		while (j + 1 < i)
		{
			_putchar(str[j + 1]);
			j++;
		}
	}
	_putchar('\n');
}
