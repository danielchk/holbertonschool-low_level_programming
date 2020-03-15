#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum the array
 * @n: Number of digits to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumlist;

	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(sumlist, n);

	sum = i;
	while (i < n)
	{
		sum += va_arg(sumlist, int);
		i++;
	}
	va_end(sumlist);
	return (sum);
}
