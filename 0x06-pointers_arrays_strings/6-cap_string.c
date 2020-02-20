#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @u: counter
 * Return: Always 0.
 */
char *cap_string(char *u)
{
int i;

for (i = 0; u[i]; i++)
{
	if (u[i - 1] == ' ' || u[i - 1] == 9 || u[i - 1] == '\n')
	{
		if (u[i] > 96 && u[i] < 123)
		{
			u[i] = u[i] - 32;
		}
	}
	if (u[i - 1] == ',' || u[i - 1] == ';' || u[i - 1] == '.')
	{
		if (u[i] > 96 && u[i] < 123)
		{
			u[i] = u[i] - 32;
		}
	}
	if (u[i - 1] == '!' || u[i - 1] == '?' || u[i - 1] == '\"')
	{
		if (u[i] > 96 && u[i] < 123)
		{
			u[i] = u[i] - 32;
		}
	}
	if (u[i - 1] == '(' || u[i - 1] == ')' || u[i - 1] == '{')
	{
		if (u[i] > 96 && u[i] < 123)
		{
			u[i] = u[i] - 32;
		}
	}
	if (u[i - 1] == '}')
	{
		if (u[i] > 96 && u[i] < 123)
		{
			u[i] = u[i] - 32;
		}
	}
}
return (u);
}
