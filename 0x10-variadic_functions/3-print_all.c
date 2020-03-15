#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - print everything
 * @format: arguments
 *
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	char *temp;
	int i = 0;

	va_start(ar, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(ar, int));
			break;
		case 'i':
			printf("%d", va_arg(ar, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(ar, double));
			break;
		case 's':
			tempstring = va_arg(ar, char*);
			if (tempstring != NULL)
			{
				printf("%s", temp);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		     format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
