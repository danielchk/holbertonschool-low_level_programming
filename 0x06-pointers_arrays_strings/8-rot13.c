#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *rot13(char *u)
{
	int i, j;
	char x[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; u[i]; i++)
	{
		for (j = 0; j <= 52 ; j++)
		{
			if (u[i] == x[j])
			{
				u[i] = t[j];
				break;
			}
		}
	}
	return (u);
}
