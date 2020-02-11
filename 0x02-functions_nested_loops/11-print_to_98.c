#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n  > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("98");
	printf("\n");
}
