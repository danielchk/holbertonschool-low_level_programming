#include "holberton.h"
/**
 * factorial - print the factorial
 * @n: Number
 * Return: Always 0.
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
