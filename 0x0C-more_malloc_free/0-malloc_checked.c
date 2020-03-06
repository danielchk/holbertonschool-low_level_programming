#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - do the malloc to b
 * @b: bytes
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == '\0')
	{
		exit(98);
	}
	return (s);
}
