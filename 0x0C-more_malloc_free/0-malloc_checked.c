#include "holberton.h"
#include <stdlib.h>
/**
 * *malloc_checked - do the malloc to b
 * @b: Int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *s;

	void s = malloc(b);

	if (s == '\0')
	{
		exit(98);
	}
	return (s);
}
