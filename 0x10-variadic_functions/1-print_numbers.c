#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers
 * Return: 0.
 * @separator: signs
 * @n: number or arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ar);
	printf("\n");
}
