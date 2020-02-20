#include "holberton.h"
/**
 * *leet - replace with 1337
 * @u: quote
 * Return: Always 0.
 */
char *leet(char *u)
{
	int j, t;
	int i[5] = {52, 51, 48, 55, 49};
	char c[5] = {'a', 'e', 'o', 't', 'l'};
	char h[5] = {'A', 'E', 'O', 'T', 'L'};

	for (j = 0; u[j]; j++)
	{
		for (t = 0; t <= 4; t++)
		{
			if (u[j] == c[t] || u[j] == h[t])
			{
				u[j] = i[t];
			}
		}
	}
	return (u);
}
