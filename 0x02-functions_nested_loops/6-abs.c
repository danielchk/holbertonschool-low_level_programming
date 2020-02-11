#include "holberton.h"
/**
 * _abs - Entry point
 * @n: inpunt
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return (n);
}
