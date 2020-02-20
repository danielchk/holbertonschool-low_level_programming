#include "holberton.h"
/**
 * *cap_string - check the code for Holberton School students.
 * @u: counter
 * Return: Always 0.
 */
char *cap_string(char *u)
{
	int i, j;
	char a[13] = {' ', '\t', '\n', ',', ';', '.',
		      '!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; u[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (i == 0 && u[i] >= 'a' && u[i] <= 'z')
				u[i] = u[i] - 32;

			if (i > 0 && u[i - 1] == a[j] &&
			    u[i] >= 'a' && u[i] <= 'z')
			{
				u[i] = u[i] - 32;
				break;
			}
		}
	}
	return (u);
}
