#include "holberton.h"

/**
 * set_bit - set to 1 at the index
 *
 * @n: int to change
 * @index: index
 * Return: returns 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int search;

	if (index > 32)
		return (-1);

	search = 1 << index;
	*n = *n | search;
	return (1);
}
