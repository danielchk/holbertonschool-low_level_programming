#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
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
