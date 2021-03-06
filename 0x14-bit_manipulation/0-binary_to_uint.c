#include "holberton.h"
/**
 * binary_to_uint - Convert to unsigned int.
 * @b: To convert to decimal
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		value = (value * 2) + (b[i] - '0');
	}
	return (value);
}
