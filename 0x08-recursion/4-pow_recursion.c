#include "holberton.h"
/**
 * _pow_recursion - multiplies the same x number y times
 * @x: number
 * @y: exponential
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (x == 1 || y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
	}
	return (pow);
}
