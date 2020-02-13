#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int a;
	char b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 15 ; b++)
		{
			if (b > 9)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
