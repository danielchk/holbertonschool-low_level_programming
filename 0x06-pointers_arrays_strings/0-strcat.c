#include "holberton.h"
/**
 * *_strcat - Entry point
 * @dest: destiny
 * @src: source
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0 ; dest[i] ; i++)
	{
	}
	for (j = 0; src[j] ; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
