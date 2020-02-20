#include "holberton.h"
/**
 * *string_toupper - upper everuthing
 * @u: quote
 * Return: Always 0.
 */
char *string_toupper(char *u)
{
	int i;

	for (i = 0; u[i]; i++)
	{
		if ((u[i] > 96) && (u[i] < 123))
		{
			u[i] = u[i] - 32;
		}
	}
	return (u);
}
