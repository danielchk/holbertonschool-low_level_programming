#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string
 * @separator: sign
 * @n: Number of arguments
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	char *st;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(ar, char *);
		if (st == NULL)
		{
			st = "(nil)";
		}
		else
		{
			printf("%s", st);
				if (separator != NULL && i < n - 1)
					printf("%s", separator);

		}

	}
	va_end(ar);
	printf("\n");
}
