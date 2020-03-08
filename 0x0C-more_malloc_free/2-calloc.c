#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - memory for an array.
 * @nmemb: elements of the array
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return ('\0');
	}
	i = malloc(nmemb * size);
	if (i == '\0')
	{
		return ('\0');
	}
	for (j = 0; j < (nmemb * size); j++)
	{
		i[j] = 0;
	}
	return (i);
}
