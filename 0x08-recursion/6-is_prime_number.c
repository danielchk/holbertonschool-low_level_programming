#include "holberton.h"
/**
 * findoptimus - Search the prime
 * @n: number to test
 * @j: test
 * Return: Always 0.
 */

int findoptimus(int n, int j)
{
	if (n % j == 0)
	{
		return (0);
	}

	if (j > (n / 2))
	{
		return (1);
	}
	return (findoptimus(n, j + 1));
}
/**
 * is_prime_number - evaluate the number
 * @n: number to evaluate
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int j = 3;

	if (n <= 0 || n == 1 || n % 2 == 0)
	{
		return (0);
	}
	return (findoptimus(n, j));
}
