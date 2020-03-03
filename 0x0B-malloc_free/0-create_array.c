#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - array
 * @size: size of the arrays
 * @c: the char
 * Return: i.
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j;

	i = malloc(size * sizeof(char));

	if (i == '\0')
	{
		return ('\0');
	}
	for (j = 0; j < size; j++)
	{
		i[j] = c;
	}
	return (i);
}
