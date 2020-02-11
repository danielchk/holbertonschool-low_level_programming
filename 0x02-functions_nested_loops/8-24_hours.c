#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int h;
	int m;
	int x;
	int y;
	int z;
	int a;

	for (h = 00 ; h < 24 ; h++)
	{
		x = h / 10;
		y = h % 10;
		for (m = 00 ; m < 60 ; m++)
		{
			z = m / 10;
			a = m % 10;
			_putchar(x + '0');
			_putchar(y + '0');
			_putchar(':');
			_putchar(z + '0');
			_putchar(a + '0');
			_putchar('\n');
		}
	}
}
