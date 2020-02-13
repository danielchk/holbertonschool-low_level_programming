#include "holberton.h"
/**
 * print_triangle - Entry point
 * @size: input
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int b;
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = size ; b >= 1  ; b--)
		{
			for (a = 1 ; a <= size ; a++)
			{
				if (a < b)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
