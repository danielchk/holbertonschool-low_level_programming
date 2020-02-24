#include "holberton.h"
/**
 * *_memcpy - Copy from a pointer to a pointer
 * @n: bytes
 * @dest: destination
 * @src: sources
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
