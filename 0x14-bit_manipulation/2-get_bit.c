#include "holberton.h"
/**
 * get_bit - show binary
 * @index: position to check
 * @n: number
 * Return: binary if it works and -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bin;

	if (index > 32)
		return (-1);

	bin = 1 << index;
	bin = bin & n;
	bin = bin >> index;
	return (bin);
}
