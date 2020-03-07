#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 *_calloc - memory for an array
 * @nmemb: elements
 * @size: bytes
 * Return: s
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *j;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	j = malloc(nmemb * size);
	if (j == '\0')
	{
		return ('\0');
	}
	_memset(j, 0, (nmemb * size));
	return (j);
}

/**
 *_memset - sets first n bytes of the memory area
 * @s: array
 * @b: set
 * @n: bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
