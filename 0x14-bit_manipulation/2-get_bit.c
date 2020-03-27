#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
