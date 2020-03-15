#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	char *string;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ar, char *);
		if (string == NULL)
		{
			string = "(nil)";
		}
		else
		{
			printf("%s", string);
				if (separator != NULL && i < n - 1)
					printf("%s", separator);

		}

	}
	va_end(ar);
	printf("\n");
}
