#include "holberton.h"
/**
 * *_strncat - concatenate 2 strings
 * @dest: destiny
 * @src: source
 * @n: lenght
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
