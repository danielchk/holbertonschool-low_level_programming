#include "holberton.h"

/**
 * clear_bit - set 0 in the index
 * @n: int to set
 * @index: index
 * Return: 1 or -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int delete;

	if (index > 32)
		return (-1);

	delete = 1 << index;
	*n &= ~(delete);
	return (1);
}