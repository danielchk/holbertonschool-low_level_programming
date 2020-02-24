#include "holberton.h"
/**
 * *_memset - replace my pointer pls
 * @b: To be replaced
 * @s: Destination
 * @n: size
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
