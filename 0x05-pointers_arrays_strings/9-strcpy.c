#include "holberton.h"
/**
 * _strcpy - Entry point
 * @dest: destiny
 * @src: source
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0 ; src[i] ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
