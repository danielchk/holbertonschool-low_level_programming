#include "holberton.h"
/**
 * findsqrt - search for a sqr
 * @n: number to find sqr
 * @r: test
 * Return: Always 0.
 */
int findsqrt(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r > n)
	{
		return (-1);
	}
	else
	{
		return (findsqrt(n, r + 1));
	}
}

/**
 * _sqrt_recursion - find the sqrt
 * @n: number to find sqrt
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (findsqrt(n, r));
	}
}
